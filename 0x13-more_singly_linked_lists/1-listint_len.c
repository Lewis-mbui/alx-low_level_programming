#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}
