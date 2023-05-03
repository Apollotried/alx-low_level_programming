#include "lists.h"

/**
 * pop_listint - delete the first node
 * @head: the head
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int var;

	if (!*head)
		return (0);

	temp = *head;
	var = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (var);
}
