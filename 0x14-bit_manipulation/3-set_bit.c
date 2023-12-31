#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: location of the number to operate on
 * @index: index of bit to set
 * Return: 1 for success and -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
