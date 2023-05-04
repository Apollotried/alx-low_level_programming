#include "main.h"

/**
 * get_bit - get the value in a given index
 * @n: the nuber to maipulate
 * @index: the index to check
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
