#include "main.h"
/**
* more_numbers - prints to 14 , 10 times
* Return: void
*/
void more_numbers(void)
{
	int i;
	int c = 0;

	while (c < 10)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			_putchar(i + '0');
			if (i == 14)
			{
				_putchar('\n');
			}
		}
		c++;
	}
}
