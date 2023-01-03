#include"sort.h"
/**
  * bubble_sort - sort bubble algorithms.
  * @array: pointer to index cero.
  * @size:size of array.
  */
void bubble_sort(int *array, size_t size)
{
	int a, b, c;
	size_t i = 1, d = 1;

	for (i = 1; i < size; i++)
	{
		for (d = 1; d < size; d++)
		{
		a = d - 1;
		b = d;
			while (array[a] > array[b])
			{
			c = array[a];
			array[a] = array[b];
			array[b] = c;
			print_array(array, size);
			}
		}
	}
}
