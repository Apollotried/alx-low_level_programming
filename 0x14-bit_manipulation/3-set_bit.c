#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: number
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 53)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
