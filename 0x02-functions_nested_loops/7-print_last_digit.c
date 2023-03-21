#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit
 * @c: the number to manipulate
 * Return: int
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (r < 0)
	{
	_putchar(-r + 48);
		return (-r);
	};
	_putchar(r + 48);
	return (r);
}
