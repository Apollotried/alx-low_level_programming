#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry
 * @nmemb: first arg
 * @size: size
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	new = ptr;

	for (i = 0 ; i < nmemb * size ; i++)
	{
		new[i] = 0;
	}
	return (ptr);
}
