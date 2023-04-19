#include "function_pointers.h"
/**
 * array_iterator - execute a func on each elem
 * @array: the array
 * @size: its size
 * @action: the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
