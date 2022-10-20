#include "main.h"
#include <stdio.h>

/**
 * main - prints prime factors
 * done by emmygreat
 *
 * Return: always 0
 */

int main(void)
{
	long a, b;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			b = number / a;
		}
	}
	printf("%ld\n", b);

	return (0);
}
