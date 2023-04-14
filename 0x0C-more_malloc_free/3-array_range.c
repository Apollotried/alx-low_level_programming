#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry
 * @min: min value
 * @max: max value
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
