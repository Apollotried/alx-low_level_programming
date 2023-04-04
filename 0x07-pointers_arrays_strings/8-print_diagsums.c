#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		count1 = count1 + a[i * size + i];
	}
	for (i = size - 1 ; i > size ; i--)
	{
		count2 = count2 + a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
