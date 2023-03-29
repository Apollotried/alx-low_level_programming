#include "main.h"
/**
 * reverse_array - reverse an array of int
 * @a: pointer to the array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1 ; i < j ; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		j[j] = temp;
	};
}
