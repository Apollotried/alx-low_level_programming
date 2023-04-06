#include "main.h"
#include <math.h>
/**
 * is_prime_number - checkes if a number is prime
 * @n: the number to manipulate
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	};
	return (helper(n, 2));
}
/**
 * helper - helps for the program
 * @n: first param
 * @i: second one
 * Return: int
 */

int helper(int n, int i)
{
	if (i > sqrt(n))
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	};
	return (helper(n, i + 1));
}
