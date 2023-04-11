#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - entry
 * @str: pointer to the string
 * Return: char*
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	};
	copy = strdup(str);

	return (copy);
}
