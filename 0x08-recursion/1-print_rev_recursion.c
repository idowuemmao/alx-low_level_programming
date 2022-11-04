#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string
 * followed by a new line
 * @s: string
 * done by emmygreat
 * Return 0;
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
