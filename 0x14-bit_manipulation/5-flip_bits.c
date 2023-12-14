#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another
 * @n: current number
 * @m: number to get to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, total = 0;
	unsigned long int first;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first = x >> i;
		if (first & 1)
			total++;
	}

	return (total);
}
