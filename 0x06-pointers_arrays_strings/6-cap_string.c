#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalize all words of a string
 * @c: the string to manipulate
 * Return: char*
 */
char *cap_string(char *c)
{
	char *token = strtok(c, " \t\n,;.!?\"(){}");

	while (token != NULL)
	{
		token[0] = toupper(token[0]);
		token = strtok(NULL, " \t\n,;.!?\"(){}");
	}
	return (c);
}
