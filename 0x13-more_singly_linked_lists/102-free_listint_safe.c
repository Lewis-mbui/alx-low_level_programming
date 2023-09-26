#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int d;
	size_t length = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
