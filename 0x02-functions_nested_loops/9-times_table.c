#include "main.h"
/**
 * times_table - shows times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			int l = i * j;
			_putchar('0' + l);
			if (j == 9)
			{
				_putchar('$');
				_putchar('\n');
				continue;
			};
			_putchar(',');
			_putchar(' ');
		};
	};
}
