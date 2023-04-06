#include "main.h"
#include <string.h>
/**
 * test - helper function
 * @s: the string
 * @p: pointer to the last element of a string
 * Return: int
 */
int test(char *s, char *p)
{
	if (s >= p)
	{
		return (1);
	};
	if (*s != *p)
	{
		return (0);
	}
	return (test(s + 1, p - 1));

}



/**
 * is_palindrome - entry
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\n')
	{
		return (1);
	}
	int i = strlen(s);
	int *p = &s[i - 1];

	return (test(s, p));
}
