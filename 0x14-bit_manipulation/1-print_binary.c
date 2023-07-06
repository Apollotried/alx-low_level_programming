#include "main.h"

/**
 * print_binary - prints binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar('0' + (1 & n));
	}
	else
	{
		_putchar('0');
	}
}
