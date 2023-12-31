#include "function_pointers.h"

/**
 * array_iterator - iterates through a given array
 * @array: input array
 * @size: number of elements in the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
