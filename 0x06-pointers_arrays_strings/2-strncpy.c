#include "main.h"
#include <string.h>
/**
 * *_strncpy - copy n characters from src to dest
 * @dest: destination
 * @src: source
 * @n: numbre to copy
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
