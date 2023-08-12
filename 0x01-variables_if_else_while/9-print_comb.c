#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
