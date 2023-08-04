#include "main.h"
/**
 * get_bit - the value of a bit
 * @n: number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
	{
		return (-1);
	}
	b = 1 & (n >> index);

	return (b);
}
