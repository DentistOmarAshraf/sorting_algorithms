#include "sort.h"

/**
 * bubble_sort - sorting algorithm function
 * @arr: array
 * @size: size_t (size of array)
 */

void bubble_sort(int *arr, size_t size)
{
	size_t i, j, temp;
	bool swaped;

	do
	{
		swaped = false;
		for (i = 0 ; i < size ; i++)
			for (j = 0 ; j < size - 1 - i ; j++)
				if (arr[j] > arr[j + 1])
				{
					swaped = true;
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					print_array(arr, size);
				}
	} while (swaped);
}

int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);
	printf("\n");
	bubble_sort(arr, n);
	printf("\n");
	print_array(arr, n);

	return (0);
}
