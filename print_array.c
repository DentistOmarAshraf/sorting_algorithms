#include "sort.h"

/**
 * print_array - print array element
 * @arr: array
 * @size: size_t
 * Return: None
 */

void print_array(const int *arr, size_t size)
{
	size_t i = 0;

	while (i < size)
	{
		if (i != 0)
			printf(", ");
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
