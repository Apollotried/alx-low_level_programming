#include "main.h"
/**
 * clear_bit - sets value to 0
 * @n: pointer to number
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & ~(1UL << index));

	return (1);
}
