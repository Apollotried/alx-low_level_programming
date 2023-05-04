#include "main.h"

/**
 * binary_to_uint - converts to an unsigned int
 * @b: the string to manipulate
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int size = 0;

	if (b == NULL)
		return (0);

	if (b[size] == '\0')
		return (0);

	while ((b[size] == '0') || (b[size] == '1'))
	{
		result <<= 1;
		result += b[size] - '0';
		size++;
	}

	return (result);
}
