#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be operated on
 * Return: len (length of the string)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
