#include "main.h"

/**
 * flip_bits - how many to flip
 * @n: number
 * @m: second number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;
	int c = 0;
	unsigned long int cur;
	unsigned long int f;

	f = n ^ m;


	for (j = 63; j >= 0; j--)
	{
		cur = f >> j;

		if (1 & cur)
			c++;
	}

	return (c);
}
