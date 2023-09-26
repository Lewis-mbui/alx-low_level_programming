#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: pointer to the first node
 * Return:  address of the node where the loop starts
 * and NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1 = head;
	listint_t *temp2 = head;

	if (head == NULL)
		return (NULL);

	while (temp1 && temp2 && temp2->next)
	{
		temp2 = temp2->next->next;
		temp1 = temp1->next;
		if (temp2 == temp1)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp2);
		}
	}

	return (NULL);
}
