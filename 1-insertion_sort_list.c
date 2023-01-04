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
	listint_t *node;

	if (!list)
		return;

	node = *list;
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
			while (node->prev)
				node = node->prev;
			print_list(node);
		}

	}
	while ((*list)->prev)
		*list = (*list)->prev;
}

/**
* swap_nodes - swaps two nodes in a doubly linked list
*
* @to_right: node on the left that's going right| R | >> | L |
* @to_left: node on the right that's going left | R | << | L |
*/
void swap_nodes(listint_t *to_right, listint_t *to_left)
{
	if (to_left->next)
		to_left->next->prev = to_right;
	if (to_right->prev)
		to_right->prev->next = to_left;

	to_right->next = to_left->next;
	to_left->next = to_right;
	to_left->prev = to_right->prev;
	to_right->prev = to_left;
}
