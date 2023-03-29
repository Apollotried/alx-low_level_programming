#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase to uppercase
 * @c: the string
 * Return: char*
 */
char *string_toupper(char *c)
{
	char *d = c;

	while (*d)
	{
		*d = toupper(*d);
		d++;
	}
	return (c);
}
