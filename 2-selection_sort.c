#include"sort.h"
/**
  * selection_sort -Algotithms sort.
  * @array: array.
  * @size: size of the array.
  */
void selection_sort(int *array, size_t size)
{
	int minimo, index, temporal;
size_t it = 0, swap;


for (swap = 0; swap < size; swap++)
{
	minimo = array[swap];

	for (it = swap + 1; it < size; it++)
	{
		if (array[it] < minimo)
		{
		minimo = array[it];
		index = it;
		}
	}
	if (array[swap] != minimo)
	{
	temporal = array[swap];
	array[swap] = minimo;
	array[index] = temporal;
	print_array(array, size);
	}
}
}
