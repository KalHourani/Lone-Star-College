#include <algorithm>
#include "basicSorts.h"

using namespace std;

int* bubble_sort(int* list, int n)
{
	int* sorted_list = list;
	bool flag = true; //flag to check if swap has been made
	int i = 0; //counter to keep track of number of passes through the array
	while (flag)
	{
		i++;
		flag = false; //reset flag at start of each pass through array
		for (int j = 0; j < n - i; j++)
		{
			if (sorted_list[j] > sorted_list[j + 1]) //compare consecutive elements
			{
				swap(sorted_list[j], sorted_list[j + 1]);
				flag = true; //swap and set flag if elements are out of order
			}
		}
	}
	return sorted_list;
}

int* selection_sort(int* list, int n)
{
	int* sorted_list = list;
	int min_index;
	for (int i = 0; i < n - 1; i++)
	{
		min_index = i;
		int min_value = sorted_list[min_index];
		for (int j = i; j < n; j++)
		{
			int current_value = sorted_list[j];
			if (min_value > current_value)
			{
				min_value = current_value;
				min_index = j;
			}
		}
		swap(sorted_list[i], sorted_list[min_index]);
	}
	return sorted_list;
}

int* insertion_sort(int* list, int n)
{
	int* sorted_list = list;
	for (int i = 0; i < n - 1; i++)
	{
		int j = i + 1;
		while (sorted_list[j] < sorted_list[j - 1])
		{
			swap(sorted_list[j], sorted_list[j - 1]);
			j--;
		}
	}
	return sorted_list;
}
