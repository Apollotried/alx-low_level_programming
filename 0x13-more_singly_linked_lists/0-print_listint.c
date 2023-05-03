#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements
 * @h: the head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
