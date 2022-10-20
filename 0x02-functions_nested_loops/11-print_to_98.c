#include "main.h"

/**
 * print_to_98 - this prints all the natural numbers from input to 98,
 * so we can seperate by a comma followd by a space
 * @n: The number to begin count at
 * done by emmygreat
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
