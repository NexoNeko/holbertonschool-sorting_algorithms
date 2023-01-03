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

/** --- --- Sorting functions -- --- --- */

#endif
