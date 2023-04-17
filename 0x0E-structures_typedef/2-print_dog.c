#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - entry
 * @d: the struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	} else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age < 0 || !d)
	{
		printf("Age: (nil)\n");
	} else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	} else
	{
		printf("Owner: %s\n", d->owner);
	}
}
