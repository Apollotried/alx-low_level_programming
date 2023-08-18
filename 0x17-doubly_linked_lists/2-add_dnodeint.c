#include "lists.h"

/**
 * add_dnodeint - adds to the beginning
 * @head: poinrt to header
 * @n: data
 * Return: dlistint_t *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	temp = *head;

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = temp;

	if (temp)
		temp->prev = newNode;

	*head = newNode;

	return (newNode);
}
