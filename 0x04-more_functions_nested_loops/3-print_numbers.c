#include "main.h"

/**
 * print_numbers - used to print 0123456789
 * done by emmygreat
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
