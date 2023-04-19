#include "function_pointers.h"
/**
 * array_iterator - execute a func on each elem
 * @array: the array
 * @size: its size
 * @action: the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
