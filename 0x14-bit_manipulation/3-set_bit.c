#include "main.h"
/**
 * set_bit - sets value to 1
 * @n: pointer to the number
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n | (1UL << index));

	return (1);
}
