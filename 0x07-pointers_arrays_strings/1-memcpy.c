#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: numbre ob bytes to copy
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
