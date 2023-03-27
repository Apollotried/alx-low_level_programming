#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a: the array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%c\n", a[i]);
			continue;
		};
		printf("%c, ", a[i]);
	}
}
