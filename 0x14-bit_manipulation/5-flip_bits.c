#include "main.h"

/**
 * flip_bits - how much to flip
 * @n: the number
 * @m: second number
 * Return: iunsigned nt
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
