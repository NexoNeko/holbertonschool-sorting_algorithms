#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
void populate_array(int *arr, int n);
#define ARRSIZE 10
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[ARRSIZE];
    size_t n = sizeof(array) / sizeof(array[0]);

	populate_array(array, n);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
	getchar();
    return (0);
}

void populate_array(int *arr, int n)
{
	int i;

	srand(time(0));

	for (i = 0; i < n; i++)
		arr[i] = (rand() % 10 + 1);

}