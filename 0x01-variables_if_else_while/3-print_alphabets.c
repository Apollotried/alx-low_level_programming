#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 99, j = 65 ; i < 122 && j < 90 ; i++, j++)
	{
		putchar(i);
		putchar(j);
	};
	putchar('\n');
	return (0);
}
