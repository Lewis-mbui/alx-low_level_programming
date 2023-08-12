#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the whole alphabet using putchar in reverse
 * Return: 0 (success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
