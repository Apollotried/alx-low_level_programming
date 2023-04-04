#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the diag
 * @a: the array
 * @size: its size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int count = 0;
	int count2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				count += a[i * size + j];
			};
			if (i + j == size - 1)
			{
				count2 += a[i * size + j];
			}
		};
	};
	printf("%d, ", count);
	printf("%d", count2);
}
