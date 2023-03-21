#include <stdio.h>
#include "_putchar.c"
/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char x = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(x[i]);
		i++
	};
	return (0);
}
