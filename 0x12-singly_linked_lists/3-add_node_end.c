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

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
