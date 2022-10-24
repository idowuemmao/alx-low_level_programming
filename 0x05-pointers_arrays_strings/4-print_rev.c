#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed
 * by a new line
 * @str: the string
 *
 * done by emmygreat
 * Return: The length of the string
 */

void print_rev(char *s)
{
	int i = 0, k, m;

	while (str[i] != '\0')
	{
		i++;
	}
	m = i;
	for (k = m - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
