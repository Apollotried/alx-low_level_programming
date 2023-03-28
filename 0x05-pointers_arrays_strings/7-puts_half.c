#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: the string to manipulate
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;

	n = strlen(str);
	if (n % 2 == 0)
	{
		for (i = n / 2 ; i < n ; i++)
		{
			_putchar(str[i]);
		};
	} else
	{
		for (i = (n - 1) / 2 ; i < n ; i++)
		{
			_putchar(str[i]);
		};
	};
	_putchar('\n');
}
