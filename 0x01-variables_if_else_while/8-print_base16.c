#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 16)
	{
		printf("%x", a);
		a++;
	}
	putchar('\n');
	return (0);
}
