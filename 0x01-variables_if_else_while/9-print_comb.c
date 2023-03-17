#include <stdio.h>
/**
 * main - numbers again
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
			continue;
		};
		putchar(',');
		putchar(' ');
	};
	return (0);
}
