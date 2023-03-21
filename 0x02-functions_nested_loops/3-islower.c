#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if lowercase
 * @c : the character to check (must be an ASCII character)
 * Return: int
 */
int _islower(int c)
{
	int r = islower(c);

if (r)
{
	return (1);
} else
{
	return (0);
};
}
