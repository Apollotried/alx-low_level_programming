#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int x = 0;
	int o;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (o = x ; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
