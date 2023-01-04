#include "sort.h"
/**
* insertion_sort_list - sorts an doubly linked list of ints
*
* @list: doubly linked list to sort
*
*/
void insertion_sort_list(listint_t **list)
{
	int j, i;

	for (; (*list)->next; *list = (*list)->next)
	{
		j = (*list)->next->n;
		i = (*list)->n;

		while (*list && i > j)
		{
			swap_nodes(*list, (*list)->next);
			if ((*list)->prev->prev)
				*list = (*list)->prev->prev;
			else if ((*list)->prev)
				*list = (*list)->prev;
			i = (*list)->n;
		}

	}
	while((*list)->prev)
		*list = (*list)->prev;
}
