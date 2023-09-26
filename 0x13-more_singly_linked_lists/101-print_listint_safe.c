#include "lists.h"

size_t lst_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t totalNodes, ind = 0;

	totalNodes = lst_len(head);

	if (totalNodes == 0)
	{
		for (; head != NULL; totalNodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < totalNodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (totalNodes);
}

/**
 * lst_len - Counts the number of unique nodes listint_t linked list
 * @head: A pointer to the first node
 * Return: the number of unique nodes in the list
 * otherwise 0
 */

size_t lst_len(const listint_t *head)
{
	const listint_t *temp1, *temp2;
	size_t totalNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp1 = head->next;
	temp2 = (head->next)->next;

	while (temp2 != NULL)
	{
		if (temp1 == temp2)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				totalNodes++;
				temp1 = temp1->next;
				temp2 = temp2->next;
			}

			temp1 = temp1->next;
			while (temp1 != temp2)
			{
				totalNodes++;
				temp1 = temp1->next;
			}

			return (totalNodes);
		}

		temp1 = temp1->next;
		temp2 = (temp2->next)->next;
	}

	return (0);
}
