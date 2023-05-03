#include "lists.h"
/**
 * delete_nodeint_at_index - deletes at the index
 * @head: the head
 * @index: the index where to delete
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2 = *head;
	unsigned int i;

	if (temp2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}

	for (i = 0 ; i < index - 1 ; i++)
	{
		if (temp2->next == NULL)
			return (-1);

		temp2 = temp2->next;
	}

	temp = temp2->next;
	temp2->next = temp->next;
	free(temp);
	return (1);
}
