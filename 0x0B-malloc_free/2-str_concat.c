#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two input strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	int i = 0;

	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
	free(concat);
}

