#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of args
 * @n: the number of args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		int arg = va_arg(args, int);

		total += arg;
	}
	va_end(args);

	return (total);
}
