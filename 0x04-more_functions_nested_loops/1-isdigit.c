#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if is a digit
 * @c: the variable to manipulate
 * Return: int
 */
int _isdigit(int c)
{
	int r;

	if (isdigit(c))
	{
		r = 1;
	} else
	{
		r = 0;
	};
	return (r);
}
