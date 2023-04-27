#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements
 * @h: the header pointer
 * Return: numberof nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
