#include "sort.h"

/**
 * insertion_sort_list - it's Not insertion sort !!
 * @list: pointer of pointer of list
 * Return: None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr_i, *ptr_j, *temp;
	bool swap;

	if (list == NULL || *list == NULL)
		return;
	do {
	swap = false;
	ptr_i = *list;
	while (ptr_i)
	{
		ptr_j = *list;
		while (ptr_j->next)
		{
			temp = ptr_j->next;
			if (ptr_j->n > ptr_j->next->n)
			{
				ptr_j->next = temp->next;
				if (temp->next)
					temp->next->prev = ptr_j;
				temp->next = ptr_j;
				temp->prev = ptr_j->prev;
				if (ptr_j->prev)
					ptr_j->prev->next = temp;
				ptr_j->prev = temp;
				while ((*list)->prev)
					(*list) = (*list)->prev;
				print_list(*list);
				swap = true;
				break;
			}
			ptr_j = ptr_j->next;
		}
		ptr_i = ptr_i->next;
	}
	} while (swap);
}
