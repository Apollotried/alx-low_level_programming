#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node at the end
 * @head: pointer to the head
 * @str: its string
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *new;

	temp = *head;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	while (temp->next != NULL)
	{
		temp++;
	}

	temp->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	return (new);
}
