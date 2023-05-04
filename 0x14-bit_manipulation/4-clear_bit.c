#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: the number
 * @index: the index to change
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
