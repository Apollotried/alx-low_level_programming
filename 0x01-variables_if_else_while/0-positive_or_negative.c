#include <stdlib.h>
#include <time.h>
/**
 * main - positive zero or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%f is positive", n);
	} else if (n < 0)
	{
		printf("%f is negative", n);
	} else
	{
		printf("%f is zero", n);
	}
	return (0);
}
