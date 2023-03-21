#include "main.h"
/**
 * print_sign - prints sign
 * Return: int
 * @n: the number to check
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	};
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	};
	_putchar('+');
	return (1);
}
