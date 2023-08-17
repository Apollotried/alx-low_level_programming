#include "lists.h"

/**
 * print_dlistint - prints elements
 * @h: head of the list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
