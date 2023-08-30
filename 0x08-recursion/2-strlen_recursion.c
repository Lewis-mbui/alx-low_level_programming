#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * using recursion
 * @s: input string
 * Return: Length of input string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
