#include "sort.h"

void swap_int(int *a, int *b);
void fun_aux_quicksort(int *array, int low, int high);
int fun_partition_lomuto(int *A, int low, int high);

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	if (size == 2)
	{
		swap_int(&array[0], &array[1]);
		return;
	}

	fun_aux_quicksort(array, 0, size);
}

void fun_aux_quicksort(int *array, int low, int high)
{
	int index;

	if (low < high)
	{
		index = fun_partition_lomuto(array, low, high);
		fun_aux_quicksort(array, low, index - 1);
		fun_aux_quicksort(array, index + 1, high);
	}
}

int fun_partition_lomuto(int *array, int low, int high)
{
	int pivot = array[high];
	int j, i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_int(&array[i], &array[j]);
		}
	}
	swap_int(&array[i + 1], &array[high]);

	return(i);
}

/**
 * swap_int - Swaps int a for int b
 *
 * @a: &array[index] || &pointer (untested)
 * @b: &array[index] || &pointer (untested)
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

