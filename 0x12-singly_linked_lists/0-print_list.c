#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements
 * @h: the head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t size = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		};
		size++;
		temp = temp->next;
	}
	return (size);
}
