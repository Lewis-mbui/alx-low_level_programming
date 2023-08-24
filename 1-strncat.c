#include "main.h"

/**
 * _strncat - concatenats two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: concatenated string of dest
 * followed by src
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}

	*dest_end = '\0';
	return (dest);
}
