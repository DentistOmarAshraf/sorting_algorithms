#include "sort.h"

/**
 * merge_sort - Function Rapper
 * @arr: array
 * @size: size_t
 * Return: None
 */
void merge_sort(int *arr, size_t size)
{
	if (!arr || !size)
		return;
	merge_rec(arr, 0, size - 1);
}

/**
 * merge_rec - Recursion function
 * @arr: array
 * @l: left index
 * @r: right index
 * Return: None
 */

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
/**
 * pr_ar - helper function for printing array
 * @arr: array
 * @l: left index
 * @r: right index
 * Return: None
 */
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
/**
 * merge_srt - main function to sort array
 * @arr: array
 * @l: left index
 * @m: medium
 * @r: right
 * Return: None
 */
void merge_srt(int *arr, size_t l, size_t m, size_t r)
{
	size_t l_size = m - l + 1;
	size_t r_size = r - m;
	int *copy;
	size_t i, j, k;

	copy = malloc(sizeof(int) * (l_size + r_size));
	if (!copy)
		return;

	printf("Merging...\n");
	for (i = 0 ; i < l_size ; i++)
		copy[i] = arr[i + l];
	printf("[left]: ");
	pr_ar(copy, 0, l_size - 1);

	for (j = 0 ; j < r_size ; j++)
	{
		copy[i] = arr[j + m + 1];
		i++;
	}
	printf("[right]: ");
	pr_ar(copy, l_size, r_size + l_size - 1);

	for (i = 0, j = l_size, k = l; k <= r ; k++)
	{
		if ((i < l_size) &&
				((j >= r_size + l_size) || (copy[i] < copy[j])))
		{
			arr[k] = copy[i];
			i++;
		}
		else
		{
			arr[k] = copy[j];
			j++;
		}
	}
	printf("[Done]: ");
	pr_ar(arr, l, r);
	free(copy);
}
