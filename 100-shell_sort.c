#include "sort.h"

/**
 * shell_sort - function to sort using shell alogrithm
 * @array:the unsorted array
 * @size:the size of the array
 * Return:nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int tmp;

	if (array == NULL || size < 2)
	return;

	while (gap < size / 3)
	{
	gap = gap * 3 + 1;
	}
	for (; gap > 0; gap /= 3)
	{
	for (i = gap; i < size; i++)
	{
	tmp = array[i];
	for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
	{
	array[j] = array[j - gap];
	}
	array[j] = tmp;
	}
	print_array(array, size);
	}
}
