#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements
 * @h: the head
 * Return: qsize_t
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
