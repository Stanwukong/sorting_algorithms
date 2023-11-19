#include "sort.h"

/**
 * swap - Exchanges the values of two pointers
 * @a: pointer to value to be swapped to @b.
 * @b: pointer to value to be swapped to @a.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in
 *                  ascending order using the 'Selection
 *                  sort' algorithm.
 * @array: The array of numbers to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t outer, inner, min_index, k;

	for (outer = 0; outer < size - 1; outer++)
	{
		min_index = outer;

		for (inner = outer + 1; inner < size; inner++)
		{
			if (array[inner] < array[min_index])
			{
				min_index = inner;
			}
		}

		if (min_index != outer)
		{
			swap(&array[outer], &array[min_index]);

			for (k = 0; k < size; k++)
			{
				printf("%d ", array[k]);
			}

			printf("\n");
		}
	}
}
