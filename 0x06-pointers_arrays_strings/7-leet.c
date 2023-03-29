#include "main.h"
#include <string.h>
/**
 * leet - codes in 1337
 * @c: the string
 * Return: char *
 */
char *leet(char *c)
{
	char *arr = "a4A4e3E3o0O0t7T7l1L1";
	char *p;

	p = c;

	while (*p)
	{
		char *ptr = memchr(arr, *p, 20);

		if (ptr != NULL)
		{
			*p = *(ptr + 1);
		};
		p++;
	};
	return (c);
}
