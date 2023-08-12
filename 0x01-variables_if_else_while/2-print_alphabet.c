#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the whole alphabet using putchar
 * Return: 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n")
	return (0);
}
