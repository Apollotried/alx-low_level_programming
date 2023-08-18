#include "lists.h"

/**
 * dlistint_len - nbr of elements
 * @h: pointer to the header node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (!h)
		return (c);

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
