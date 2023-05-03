#include "lists.h"

/**
 * add_nodeint_end - adds at the end
 * @head: a pointer to the head
 * @n: the data
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			last = last->next;
		temp->next = new;
	}

	return (*head);
}
