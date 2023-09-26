#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first element
 * Return:  the head node’s data (n)
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
