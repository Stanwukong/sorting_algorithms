#include "sort.h"


void swap(int *a, int *b);

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using Bubble sort algorithm.
 * @array: Array to be sorted.
 * @size: Number of elements in @array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t no_swaps, outer, inner;

	for (outer = 0; outer < size - 1; outer++)
	{
		for (inner = 0; inner < size - 1; inner++)
		{
			if (array[inner] > array[inner + 1])
			{
				swap(&array[inner], &array[inner + 1]);

				for (no_swaps = 0; no_swaps < size; no_swaps++)
				{
					printf("%d ", array[no_swaps]);
				}

				printf("\n");
			}
		}
	}
}


/**
 * swap - swaps integer values of two memory locations.
 * @a: The address containing int to be swapped to @b
 * @b: The address containing int to be swappped to @a
 *
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
