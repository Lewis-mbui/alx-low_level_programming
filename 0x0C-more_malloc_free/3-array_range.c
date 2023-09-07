#include "main.h"
#include<stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, elements;

	if (min > max)
		return (NULL);

	elements = max - min + 1;

	ar = malloc(sizeof(int) * elements);

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ar[i] = min++;

	return (ar);
}
