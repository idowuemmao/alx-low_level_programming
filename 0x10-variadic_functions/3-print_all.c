#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: the conversion specifier to print
 * done by emmygreat
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *seperator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(seperator, args);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
