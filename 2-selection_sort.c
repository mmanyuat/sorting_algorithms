#include "sort.h"

/**
 * selection_sort - function to sort based on selection algorithm
 * @array:list ofthe unosrted elements
 * @size: of the array
 * Return:Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, itemp;
	int temp;

	if (array == NULL || size < 2)
	{
	return;
	}
	for (i = 0; i < size - 1; i++)
	{
	itemp = i;
	for (j = i + 1; j < size; j++)
	{
	if (array[j] < array[itemp])
		itemp = j;
	}
	if (itemp != i)
	{
	temp = array[i];
	array[i] = array[itemp];
	array[itemp] = temp;
	print_array(array, size);
	}
	}
}
