#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix
 * @s: the string
 * @accept: the bytes to manipulate
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
