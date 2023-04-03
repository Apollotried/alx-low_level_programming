#include "main.h"
#include <string.h>
/**
 * *_memset - fills memory
 * @s: the memory to fill
 * @char: the content
 * @n: the number to fill out
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
