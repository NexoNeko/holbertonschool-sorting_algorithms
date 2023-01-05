#ifndef SORT_H
#define SORT_H

/**==================================*/
/**========= header files ===========*/
/**==================================*/
#include<stdlib.h>
#include<stdio.h>

/**==================================*/
/**========== structures ============*/
/**==================================*/
/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	    const int n;
		    struct listint_s *prev;
			    struct listint_s *next;
} listint_t;

/**==================================*/
/**===== function signatures=========*/
/**==================================*/

/** +++ +++ Holberton functions IND ++ +++ +++ */

/** print_array prints an array */
void print_array(const int *array, size_t size);

/** print_list prints a doubly linked list */
void print_list(const listint_t *list);

/** --- --- Holberton functions IND -- --- --- */

/** +++ +++ Sorting functions IND ++ +++ +++ */

/** bubble_sort performs a bubble sort on an int list */
void bubble_sort(int *array, size_t size);

/** insertion_sort_list performs the insertion sort on  an int list */
void insertion_sort_list(listint_t **list);

/** selection_sort - slowly sorts a list, low space usage */
void selection_sort(int *array, size_t size);

/** Quickly sorts a list, high space usage. */
void quick_sort(int *array, size_t size);

/** --- --- Sorting functions -- --- --- */

/** +++ +++ Aux_functions +++ +++ +++ */

/** swaps two linked list nodes */
void swap_nodes(listint_t *to_right, listint_t *to_left);

/** --- --- Aux_functions --- --- --- */

#endif
