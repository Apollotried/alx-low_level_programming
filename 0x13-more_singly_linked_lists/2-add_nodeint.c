#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning
 * @head: a pointer to the head
 * @n: the data
 * Return: listint_t*
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
