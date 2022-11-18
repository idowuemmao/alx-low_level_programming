#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - ..
 * @seperator: ..
 * @n: ..
 * done by emmygreat
 *
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sring;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);

			i++;
		}

		va_end(args);
	}
	printf("\n");
}
