#include "main.h"
#include <ctype.h>
/**
 * _isalpha -  a function that checks for alphabetic character.
 * Return: 0
 *@c - the letter in ascii
 */
int _isalpha(int c)
{
	int r = isalpha(c);

	if (r)
	{
		return (1);
	};
	return (0);
}
