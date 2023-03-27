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
			printf("%d\n", a[i]);
			continue;
		};
		printf("%d, ", a[i]);
	}
}
