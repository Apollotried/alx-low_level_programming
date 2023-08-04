#include "main.h"
/**
 * print_binary - prints the binary number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j;
	int c = 0;
	unsigned long int cur;

	for (j = 63; j >= 0; j--)
	{
		cur = n >> j;
		if (1 & cur)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}

	if (!c)
	{
		_putchar('0');
	}
}
