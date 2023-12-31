#include "sort.h"

int main(void)
{
	int arr[] = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);
	printf("\n");
	quick_sort(arr, n);
	printf("\n");
	print_array(arr, n);

	return (0);
}
