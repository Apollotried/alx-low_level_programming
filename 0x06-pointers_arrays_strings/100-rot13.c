#include "main.h"
#include <string.h>
/**
 * rot13 - codes in ROT13
 * @c: the string
 * Return: char *
 */
char *rot13(char *c)
{
	char *arr1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *arr2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *p;

p = c;

while (*p)
{
char *ptr = memchr(arr1, *p, 52);
		if (*p != '\0')
{
			int indice = ptr - arr1;

*p = arr2[indice];
		}
		p++;
	};
return (c);
}
