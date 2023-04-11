#include "main.h"
/**
 * create_array - entry
 * @size: the size of the array
 * @c: initialize
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		p = NULL;

		return (p);
	};

	p = (char *)malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}

		for (i = 0 ; i < size ; i++)
		{
			p[i] = c;
		}
		return (p);


}
