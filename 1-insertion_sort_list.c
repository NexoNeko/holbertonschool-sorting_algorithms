#include "sort.h"
/**
* insertion_sort_list - sorts an doubly linked list of ints
*
* @list: doubly linked list to sort
*
*/
void insertion_sort_list(listint_t **list)
{
		int j, i, key;

		for (; (*list)->next; *list = (*list)->next)
		{
			j = (*list)->next->n;
			key = j;
			i = (*list)->n;
			printf("%d > %d\n", i, j);
				while ((*list)->prev && i > key)
				{
					printf("true\n");
					swap_nodes(*list, (*list)->next);
					*list = (*list)->prev->next;
					i = (*list)->prev->n;
				}
		}
		while((*list)->prev)
			*list = (*list)->prev;
}
