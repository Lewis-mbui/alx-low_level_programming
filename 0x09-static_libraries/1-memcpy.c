#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: area to be copied to
 * @src: area to be copied from
 * @n: number of bytes from memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
