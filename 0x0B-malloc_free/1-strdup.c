#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates to a new memory location
 * @str: the string to be copied
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;

	int i = 0;

	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		copy[j] = str[j];

	return (copy);
	free(copy);
}
