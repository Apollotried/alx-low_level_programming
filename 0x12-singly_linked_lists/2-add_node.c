#include "lists.h"
#include <string.h>
/**
 * add_node - adds to the beginning
 * @head: the head
 * @str: the new node's string
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->next = *head;
	temp->len = strlen(str);
	*head = temp;

	return (*head);
}
