#include "sort.h"


/**
 * print_list -print D.linked list element
 * @list: the list to be printed
 *
 * Return: NONE
 */

void print_list(const listint_t *list)
{
	int i = 0;

	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		list = list->next;
		i++;
	}
	printf("\n");
}
