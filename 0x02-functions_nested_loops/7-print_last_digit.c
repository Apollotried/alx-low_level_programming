#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @c: the number to manipulate
 * Return: int
 */
int print_last_digit(int c)
{
	int d = _abs(c);
	int r = d % 10;

	_putchar(r + '0');
	return (r);
}
