#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - rturns the length of a string
 * @s: the string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
