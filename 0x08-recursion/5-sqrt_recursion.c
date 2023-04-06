#include "main.h"
/**
 * find - helper funct
 * @n: the number
 * @r: the root to test
 * Return: int
 */
int find(int n, int r)
{
if (r * r == n)
{
return (r);
};
if (r == n / 2)
{
return (-1);
}
return (find(n, r + 1));
}


/**
 *  _sqrt_recursion - entry
 *  @n: the number to manipulate
 *  Return: int
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	};
	if (n == 1)
	{
		return (1);
	}
}
