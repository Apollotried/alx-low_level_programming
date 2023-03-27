#include "main.h"
#include <string.h>
/**
 * print_rev - prints in reverse
 * @s: the string to manipulate
 * Return: void
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = strlen(s);
	for (i = n - 2 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	};
	_putchar('\n');
}
