#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: the binary nbr
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int iter;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (iter = 0; b[iter]; iter++)
	{
		if (b[iter] > '1' || b[iter] < '0')
			return (0);

		val = 2 * val + (b[iter] - '0');
	}

	return (val);
}
