#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 * @argc: the count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int count = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1 ; i < argc ; i++)
{
char *ptr = argv[i];
while (*ptr)
{
if (!isdigit(*ptr))
{
printf("Error\n");
return (1);
}
ptr++;
}
count += atoi(argv[i]);
}
printf("%d\n", count);
return (0);
}

