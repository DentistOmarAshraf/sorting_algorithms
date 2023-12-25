#include "sort.h"

void merge_sort(int *arr, size_t size)
{
	merge_rec(arr, 0, size - 1);
}

void merge_rec(int *arr, size_t l, size_t r)
{
	size_t mid;

	if (l < r)
	{
		mid = l + (r - l - 1) / 2;
		merge_rec(arr, l, mid);
		merge_rec(arr, mid + 1, r);
		merge_srt(arr, l, mid, r);
	}
}
void pr_ar(int *arr, size_t l, size_t r)
{
	size_t i;

	for (i = l ; i <= r ; i++)
	{
		if (i != l)
			printf(", ");
		printf("%d", arr[i]);
	}
	printf("\n");
}

void merge_srt(int *arr, size_t l, size_t m, size_t r)
{
	size_t l_size = m - l + 1;
	size_t r_size = r - m;
	int l_arr[l_size], r_arr[r_size];
	size_t i, j, k;

	printf("Merging...\n");
	for (i = 0 ; i < l_size ; i++)
		l_arr[i] = arr[i + l];
	printf("[left]: ");
	print_array(l_arr, l_size);

	for (i = 0 ; i < r_size ; i++)
		r_arr[i] = arr[i + m + 1];
	printf("[right]: ");
	print_array(r_arr, r_size);

	for (i = 0, j = 0, k = l; k <= r ; k++)
	{
		if ((i < l_size) &&
				((j >= r_size) || (l_arr[i] < r_arr[j])))
		{
			arr[k] = l_arr[i];
			i++;
		}
		else
		{
			arr[k] = r_arr[j];
			j++;
		}
	}
	printf("[Done]: ");
	pr_ar(arr, l, r);
}

		
