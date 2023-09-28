#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 */

void print_binary(unsigned long int n)
{
	int i, total = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total != 0)
			_putchar('0');
	}
	if (total == 0)
		_putchar('0');
}
