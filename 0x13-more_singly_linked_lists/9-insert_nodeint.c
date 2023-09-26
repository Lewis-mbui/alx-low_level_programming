#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is to be added
 * @n: value to be inserted in the new node
 *
 * Return: pointer to the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp1 = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL || head == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	for (i = 0; temp1 && i < idx; i++)
	{
		if (i == idx - 1)
		{
			temp->next = temp1->next;
			temp1->next = temp;
			return (temp);
		}
		else
			temp1 = temp1->next;
	}

	return (NULL);
}
