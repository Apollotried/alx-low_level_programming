#include <stdio.h>
/**
 * main - advanced task
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (k = j + 1 ; j < 9 ; j++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					putchar('\n');
					continue;
				};
				putchar(',');
				putchar(' ');
			};
		};
	};
	return (0);
}
