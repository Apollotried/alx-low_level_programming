#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase to uppercase
 * @c: the string
 * Return: char*
 */
char *string_toupper(char *c)
{
	while (*c)
	{
		*c = *c.toupper(*c);
		c++
	}
	return c;
}
