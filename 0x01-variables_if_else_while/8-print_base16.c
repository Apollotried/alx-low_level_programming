#include <stdio.h>
/**
 * main - base 16
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i <= 15; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		} else
		{
			putchar(i - 10 + 'a');
		}
	};
	putchar('\n');
	return (0);
}
