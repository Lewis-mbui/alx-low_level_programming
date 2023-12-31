#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: test string
 * @b: character to be filled
 * @n: bytes of the memory area pointed to by s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
