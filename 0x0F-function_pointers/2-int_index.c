#include "function_pointers.h"
/**
 * int_index - search for an int
 * @array: the array
 * @size: the size of an array
 * cmp: the callback
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp ==NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return i;
	}
	return (-1);
}
