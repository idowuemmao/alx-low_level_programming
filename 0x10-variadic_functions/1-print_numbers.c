#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - ...
 * @seperator: ...
 * @n: ...
 * done by emmygreat
 *
 * Return: ...
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}
