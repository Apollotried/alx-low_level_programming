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
		printf("Name: (nil)");
	} else
	{
		printf("Name: %s", d->name);
	};

	if (d->age == NULL)
	{
		printf("Age: (nil)");
	} else
	{
		printf("Age: %f", d->age);
	};

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	} else
	{
		printf("Owner: %s", d->owner);
	};
}
