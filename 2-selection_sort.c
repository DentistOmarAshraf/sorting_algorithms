#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @arr: pointer to array
 * @size: size_t
 * Return: None
 */

void selection_sort(int *arr, size_t size)
{
	size_t i, j, ind;
	int min;
	bool swap;

	for (i = 0 ; i < size ; i++)
	{
		swap = false;
		min = arr[i];
		ind = i;
		for (j = i + 1 ; j < size ; j++)
			if (arr[j] < min)
			{
				min = arr[j];
				ind = j;
				swap = true;
			}
		arr[ind] = arr[i];
		arr[i] = min;
		if (swap)
			print_array(arr, size);
	}
}

