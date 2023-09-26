 #include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: value to be inserted in the node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
