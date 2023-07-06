#include "main.h"

/**
 * flip_bits - ow many to flip
 * @n: number
 * @m: number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index, flipsnumber = 0;
	unsigned long int s = sizeof(unsigned long int) * 8;

	for (index = 0; index < s; index++)
	{
		if ((1 & n) != (m & 1))
			flipsnumber += 1;

		m = m >> 1;
		n = n >> 1;
	}
	return (flipsnumber);
}
