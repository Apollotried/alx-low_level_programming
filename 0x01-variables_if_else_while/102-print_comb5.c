#include <stdio.h>
/**
 * main - the last task
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (z = 0 ; z < 10 ; z++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(z + '0');
					if (i == 9 && j == 8 && k == 9 && z == 9)
					{
						putchar(' ');
						continue;
					};
					putchar(',');
					putchar(' ');
				};
			};
		};
	};
	return (0);
}
