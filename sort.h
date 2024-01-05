#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer
 * @next: pointer to next
 * @prev: pointer to prev
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*------printing function------*/
void print_array(const int *, size_t);
void print_list(const listint_t *);

/*------SORTING FUNCTION-------*/
void bubble_sort(int *, size_t);
void insertion_sort_list(listint_t **);
void selection_sort(int *, size_t);

/*-------MergeSort headers------*/
void merge_sort(int *, size_t);
void merge_rec(int*, size_t, size_t);
void merge_srt(int*, size_t, size_t, size_t);

/*-------QuickSort headers------*/
void swap(int *, int *);
void quick_sort(int *, size_t);
void quick_rec(int *, size_t, int, int);
int partition(int *, size_t, int, int);


#endif
