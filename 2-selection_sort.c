#include"sort.h"
/**
  * selection_sort -Algotithms sort.
  * @array: array.
  * @size: size of the array.
  */
void selection_sort(int *array, size_t size)
{
	int hand;
	size_t i, j = 0;

for (; j < size; j++)
{
	for (i = j + 1; i < size; i++)
	{
		if (array[j] > array[i])
		{
			hand = array[j];
			array[j] = array[i];
			array[i] = hand;
		}
	}
	print_array(array, size);
}
}
