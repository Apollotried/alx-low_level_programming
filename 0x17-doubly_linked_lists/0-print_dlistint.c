#include "lists.h"

/**
 * print_dlistint - prints elements
 * @h: head of the list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c;

	if (h == NULL)
		return (c);
	c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
