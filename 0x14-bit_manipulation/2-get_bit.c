#include "main.h"

/**
 * get_bit - value of a bit
 * @n: the number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((1 & (n >> index)));
}
