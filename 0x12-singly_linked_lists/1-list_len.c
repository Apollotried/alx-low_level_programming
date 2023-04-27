#include "lists.h"

/**
 * list_len -  returns the number of elements
 * @h: the header pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h  = h->next
	}

	return (size);
}
