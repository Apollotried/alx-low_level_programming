#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @index: the index to change
 * @n: the number
 * Return: it
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
