#include <stdio.h>

/**
 * main - used to print the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000
 *
 * done by emmygreat
 * Return: 0 always
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%lu\n", tot_sum);

	return (0);
}
