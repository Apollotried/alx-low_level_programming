#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/*
 * print_strings - prints strings followed by separator
 * @separator: separator
 * @n: the number of args
 * @...: the variable paramets
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(strings, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
