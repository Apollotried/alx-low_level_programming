#include "main.h"

/**
 * clear_bit - sets value to 0
 * @n: number
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (i & *n)
		*n ^= i;

	return (1);
}
