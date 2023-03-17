#include <stdio.h>
/**
 * main - prints reversly XD
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 8 && j == 9)
			{
				putchar('\n');
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
}
