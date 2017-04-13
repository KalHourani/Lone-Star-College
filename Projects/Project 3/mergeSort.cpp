#include <algorithm>
#include "mergeSort.h"

vector<int> merge(vector<int> l1, vector<int> l2)
{
	vector<int> result;
	vector<int> left = l1;
	vector<int> right = l2;
	while (!(left.empty()) && !(right.empty()))
	{
		if (left[0] <= right[0])
		{
			result.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	while (!(left.empty()))
	{
		result.push_back(left[0]);
		left.erase(left.begin());
	}
	while (!(right.empty()))
	{
		result.push_back(right[0]);
		right.erase(right.begin());
	}
	return result;
}

vector<int> merge_sort(vector<int> list)
{
	if (list.size() <= 1)
	{
		return list;
	}
	else
	{
		vector<int> left;
		vector<int> right;
		for (int i = 0; i < (list.size() / 2); i++)
		{
			left.push_back(list[i]);
		}
		for (int i = list.size() / 2; i < list.size(); i++)
		{
			right.push_back(list[i]);
		}
		left = merge_sort(left);
		right = merge_sort(right);

		return merge(left, right);
	}
}