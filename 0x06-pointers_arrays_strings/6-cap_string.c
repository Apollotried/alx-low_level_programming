#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * cap_string - capitalize all words of a string
 * @c: the string to manipulate
 * Return: char*
 */
char *cap_string(char *c)
{
	char *copy = malloc(strlen(c) + 1);

	strcpy(copy, c);
	char *token = strtok(copy, " \t\n,;.!?\"(){}");

	while (token != NULL)
	{
		token[0] = toupper(token[0]);
		token = strtok(NULL, " \t\n,;.!?\"(){}");
	}
	return (copy);
}
