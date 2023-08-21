#include "main.h"

/**
 * print_array - prints n elements of
 * an array of integers, followed by a new line
 * @a: name of array
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		_putchar("%c, ", a[i]+'0');
	}
		if (i == (n - 1))
		{
			_putchar("%c", a[n - 1]+'0');
		}
			printf("\n");
}
