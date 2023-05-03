#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: the head
 * @index: the index to accesss
 * Return: listint_t *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (i != index - 1)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
