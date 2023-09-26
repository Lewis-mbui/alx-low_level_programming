#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node
 * Return:  pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*temp1)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}

	*head = temp2;

	return (*head);
}
