#include "lists.h"

/**
 * add_dnodeint_end - add at the end
 * @head: pointer to head
 * @n: data
 * Return: dlistint_t *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	temp = *head;

	newNode->n = n;
	newNode->next = NULL;

	if (temp)
	{
		temp->next = newNode;
	} else
	{
		*head = newNode;
	}

	newNode->prev = temp;

	return (newNode);
}
