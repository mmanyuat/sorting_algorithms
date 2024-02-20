#include "sort.h"

/**
 * quick_sort - function to sort using quick alogrithm
 * @array:the array
 * @size:the size of the array
 * Return:nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicker(array, 0, size - 1, size);
}

/**
 * quicker - function to help sort
 * @array:the array
 * @start:the first index
 * @end:the last index
 * @size:the size of the array
 * Return:nothing
 */

void quicker(int *array, int start, int end, size_t size)
{
	int pindex;

	if (start < end)
	{
	pindex = lomuto_partition(array, start, end, size);
	quicker(array, start, pindex - 1, size);
	quicker(array, pindex + 1, end, size);
	}
}

/**
 * lomuto_partition - quick sort partition
 * @array:the array
 * @start:its first index
 * @end:the last index
 * @size:the szie of the array
 * Return:the partition index
 */

int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot, partindex, itemp, temp, i;

	pivot = array[end];
	partindex = start;
	for (i = start; i <= end - 1; i++)
	{
	if (array[i] <= pivot)
	{
	temp = array[i];
	array[i] = array[partindex];
	array[partindex] = temp;
	partindex++;
	print_array(array, size);
	}
	}
	itemp = array[end];
	array[end] = array[partindex];
	array[partindex] = itemp;
	print_array(array, size);
	return (partindex);
}


