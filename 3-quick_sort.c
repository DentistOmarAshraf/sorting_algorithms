#include "sort.h"
/**
 * swap - swap two array elements
 * @x: pointer to int
 * @y: pointer to int
 * Return: None
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * quick_sort - rapper function
 * @arr: array
 * @size: size of array
 */

void quick_sort(int *arr, size_t size)
{
	if (!arr || size < 1)
		return;
	quick_rec(arr, size, 0, size - 1);
}
/**
 * quick_rec - recursive function that sort array
 * @arr: array
 * @size: size of array for printing
 * @low: low index
 * @high: high index
 * Return: None
 */

void quick_rec(int *arr, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(arr, size, low, high);
		quick_rec(arr, size, low, pivot_index - 1);
		quick_rec(arr, size, pivot_index + 1, high);
	}
}
/**
 * partition - function to retrurn pivot
 * @arr: array
 * @size: size of array
 * @low: low index
 * @high: high index
 * Return: int
 */
int partition(int *arr, size_t size, int low, int high)
{
	int i, j;
	int pivot;

	pivot = arr[high];
	i = low - 1;
	for (j = low ; j <= high - 1 ; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (i != j && arr[i] != arr[j])
				print_array(arr, size);
		}
	}
	i++;
	swap(&arr[i], &arr[high]);
	if (i != j && arr[i] != arr[j])
		print_array(arr, size);
	return (i);
}
