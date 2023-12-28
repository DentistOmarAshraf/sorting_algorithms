#include "sort.h"

/**
 * insertion_sort_list - sorting list by insertion sorting algo
 * @list: pointer of list
 * Return: None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr1, *ptr2, *key, *chkpt;

	ptr1 = (*list)->next;
	while (ptr1)
	{
		key = ptr1;
		ptr2 = ptr1->prev;
		ptr1 = ptr1->next;
		while (ptr2 && ptr2->n > key->n)
			ptr2 = ptr2->prev;
		if (!ptr2)
		{
			chkpt = *list;
			key->prev->next = key->next;
			if (key->next)
				key->next->prev = key->prev;
			chkpt->prev = key;
			key->next = chkpt;
			key->prev = NULL;
			*list = key;
			print_list(*list);
			continue;
		}
		key->prev->next = key->next;
		if (key->next)
			key->next->prev = key->prev;
		key->next = ptr2->next;
		if (key->next)
			key->next->prev = key;
		key->prev = ptr2;
		ptr2->next = key;
		print_list(*list);
	}
}
