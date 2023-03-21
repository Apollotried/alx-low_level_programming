#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	int i;

	while (x < 10)
	{
		for (i = 97 ; i < 123 ; i++)
		{
			_putchar(i);
		};
		x++;
	};
	_putchar('\n');
}
