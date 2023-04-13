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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		res = malloc(strlen(s1) + strlen(s2) + 1);

		if (res == NULL)
			return (NULL);

		strncat(res, s1, strlen(s1));
		strncat(res, s2, strlen(s2));
	} else
	{
		res = malloc(strlen(s1) + n + 1);

		if (res == NULL)
			return (NULL);

		strncat(res, s1, strlen(s1));
		strncat(res, s2, n);
	}


	return (res);
}
