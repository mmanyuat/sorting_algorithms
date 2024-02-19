#include "sort.h"

/**
 * bubble_sort - function to sort list of arrays
 * @array:the unosrted array
 * @size:the size of the array
 * Return:NOthing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int  temp;

	if (array == NULL || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
	for (j = 0; j < size - i - 1; j++)
	{
	if (array[j] > array[j + 1])
	{
	temp = array[j];
	array[j] = array[j + 1];
	array[j + 1] = temp;
	print_array(array, size);
	}
	}
	}
}
