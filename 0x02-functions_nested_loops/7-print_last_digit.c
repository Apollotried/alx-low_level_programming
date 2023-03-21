#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit
 * @c: the number to manipulate
 * Return: int
 */
int print_last_digit(int c)
{
	int d = abs(c);
	int r = d % 10;

	_putchar(r + 48);
	return (r);
}
