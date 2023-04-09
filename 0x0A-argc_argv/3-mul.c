#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: the count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	} else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
