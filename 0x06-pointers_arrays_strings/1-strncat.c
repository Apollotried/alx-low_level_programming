#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates but takes n characters from src
 * @dest: destination string
 * @src: source string
 * @n: the maximum number to take from src
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
