#include "main.h"
/**
 * puts2 - prints every other character
 * @str: the string to manipulate
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i += 2;
	};
}
