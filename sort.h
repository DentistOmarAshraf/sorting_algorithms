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
void bubble_sort(int *arr, size_t size);

#endif
