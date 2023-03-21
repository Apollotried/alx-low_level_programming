#include <stdio.h>
#include "main.h"
/**
 *  print_to_98 - prints numbers to 98
 *  @n: the number to manipulate
 *  Return: void
 */
void print_to_98(int n)
{
	int l = n;

	while (l < 99)
	{
		printf("%d", l);
		l++;
	};
}
