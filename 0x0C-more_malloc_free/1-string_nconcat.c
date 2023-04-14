#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concats 2 strings
 * @s1: destination
 * @s2: source
 * @n: maximum n from s2
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0 ; s1[index]; index++)
		len++;

	res = malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	len = 0;

	for (index = 0 ; s1[index]; index++)
		res[len++] = s1[index];

	for (index = 0 ; s2[index] && index < n ; index++)
		res[len++] = s2[index];

	res[len] = '\0';

	return (res);
}
