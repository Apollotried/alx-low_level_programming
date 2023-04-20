#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of args
 * @n: the number of args
 * @...: variable number of param
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int total = 0;

	if (n == 0)
		return (0);

	va_list ap;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);

	return (total);
}
