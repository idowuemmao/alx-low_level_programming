#include "main.h"

/**
 * main - prints prime factors
 * done by emmygreat
 *
 * Return: always 0
 */

int main(void)
{
	long int a, b c;

	b = 612852475143;
	a = 3;
	c = 0;
	while (b != 1)
	{
		if (b % a == 0)
		{
			b = b / a;
			if (a > c)
				c = a;
		}
		else
		{
			a++
		}
	}
	printf("%ld\n", c);
	return (0);
}
