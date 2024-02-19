#include "sort.h"

/**
 * bubble_sort - function to sort list of arrays
 * @array:the unosrted array
 * @size:the size of the array
 * Return:NOthing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int  temp;
	size_t len = size;
	bool swap = false;


	if (array == NULL || size < 2)
	{
	return;
	}
	while (!swap)
	{
	swap = true;
	for (i = 0; i < len - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	swap = false;
	}
	print_array(array, size);
	}
	len--;
	}
}
