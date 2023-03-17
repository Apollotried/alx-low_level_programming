#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 97 ; i < 101 ; i++)
	{
		putchar(i);
	};
	for (j = 102 ; j < 113 ; j++)
	{
		putchar(j);
	};
	putchar('\n');
	return (0);
}
