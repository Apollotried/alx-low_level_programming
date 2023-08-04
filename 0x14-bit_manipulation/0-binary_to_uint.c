#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of 0 and 1
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dv = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] > '1' || b[j] < '0')
			return (0);

		dv = 2 * dv + (b[j] - '0');
	}

	return (dv);
}
