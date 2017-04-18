#include <algorithm>
#include "mergeSort.h"

int* merge(int* l1, int* l2, int nl, int nr)
{
	int* result = new int[nl + nr];
	int* left = l1;
	int* right = l2;
	int i = 0, j = 0;
	while ((i < nl) && (j < nr))
	{
		if (left[i] <= right[j])
		{
			result[i + j] = left[i];
			i++;
		}
		else
		{
			result[i + j] = right[j];
			j++;
		}
	}
	while (i < nl)
	{
		result[i + j] = left[i];
		i++;
	}
	while (j < nr)
	{
		result[i + j] = right[j];
		j++;
	}
	return result;
}

int* merge_sort(int* list, int n)
{
	if (n <= 1)
	{
		return list;
	}
	else
	{
		int* left = new int[n/2];
		int* right = new int[n - n/2];
		for (int i = 0; i < (n / 2); i++)
		{
			left[i] = list[i];
		}
		for (int i = n / 2; i < n; i++)
		{
			right[i - n/2] = list[i];
		}
		left = merge_sort(left, n/2);
		right = merge_sort(right, n - n/2);

		return merge(left, right, n/2, n - n/2);
	}
}
