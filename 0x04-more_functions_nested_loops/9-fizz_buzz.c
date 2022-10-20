#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * description: THe FIZZ_BUZZ test is an interview question
 * to print numbers from 1 to 100.
 * replace multiples of 3 with Fizz
 * replace multiples of 5 with Buzz
 * replace multiples of 15 with fizzbuzz
 *
 * done by emmygreat
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
