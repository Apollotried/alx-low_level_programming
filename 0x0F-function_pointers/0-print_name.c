#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: callback
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
