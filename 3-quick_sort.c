#include "sort.h"

void swap_int(int *a, int *b);
void fun_aux_quicksort(int *array, int low, int high, int size);
int fun_partition_lomuto(int *array, int low, int high, int size);

/**
 * quick_sort - entry point for the sorting algorithm
 *
 * @array: array to sort
 * @size: Size of the array to sort
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	if (size == 2)
	{
		swap_int(&array[0], &array[1]);
		print_array(array, size);
		return;
	}

	fun_aux_quicksort(array, 0, size - 1, size);
}

/**
 * fun_aux_quicksort - performs the actual Lomuto quick sort recursively
 *
 * @array: array to sort
 * @low: index holding the values for the 'lower' array
 * @high: Index holding the values for the 'higher' array
 * @size: Size of the array to print
 */
void fun_aux_quicksort(int *array, int low, int high, int size)
{
	int index;

	if (low < high)
	{
		index = fun_partition_lomuto(array, low, high, size);
		fun_aux_quicksort(array, low, index - 1, size);
		fun_aux_quicksort(array, index + 1, high, size);
	}
}

/**
 * fun_partition_lomuto - this function divides the array into sub-arrays
 *
 * @array: array to sort
 * @low: index holding the values for the 'lower' array
 * @high: Index holding the values for the 'higher' array
 * @size: Size of the array to print
 * Return: int i
 */
int fun_partition_lomuto(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j, i = low;

	for (j = low; j < high; ++j)
	{
		if (array[j] < pivot)
		{
			swap_int(&array[j], &array[i]);
			if (array[j] != array[i])
				print_array(array, size);
			++i;
		}
	}
	swap_int(&array[i], &array[high]);
	if (array[high] != array[i])
		print_array(array, size);

	return (i);
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
