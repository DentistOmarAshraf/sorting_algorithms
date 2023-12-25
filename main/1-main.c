#include "sort.h"

listint_t *create_listint(const int *arr, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = arr[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if(list->next)
			list->next->prev = list;
	}
	return (list);
}

int main(void)
{
	listint_t *list;
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	list = create_listint(arr, n);
	if (!list)
		return (1);
	print_list(list);

	return (0);
}
