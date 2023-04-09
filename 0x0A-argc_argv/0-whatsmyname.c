#include "main.h"
/**
 * main - entry
 * @argc: count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *p = argv[0];

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	};
	return (0);
}
