#include "main.h"

/**
 * get_endianness - checks the endia
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *)&i;

	if (*b)
		return (1);
	else
		return (0);
}
