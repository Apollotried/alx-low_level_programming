#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: 0
 */
int main(void)
{
	int i = 99;
	int j = 65;

	for (i, j ; i < 122, j < 90 ; i++, j++)
	{
		putchar(i);
		putchar(j);
	};
	putchar('\n');
	return (0);
}
