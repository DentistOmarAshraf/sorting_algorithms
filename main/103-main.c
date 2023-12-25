#include "sort.h"

int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, size);
	printf("\n");
	merge_sort(arr, size);
	printf("\n");
	print_array(arr, size);

	return (0);
}

