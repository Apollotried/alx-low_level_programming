#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
