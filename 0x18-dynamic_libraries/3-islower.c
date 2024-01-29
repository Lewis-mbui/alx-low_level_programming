#include "main.h"

/**
 * _islower - prints all alphabets in lowercase
 * @c: character to be checked
 * Return: 1 (success) and 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
