#include "main.h"

/**
 * rev_string -A function that reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Return: 0 is success
 */

void rev_string(char *s)
{
	int d, c, k;
	char *a, b;

	a = s;

	while (s[c] != '\0')
	{
		c++
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (d = 1; d < (c / 2); d++)
	{
		b = s[d];
		s[d] = *a;
		*a = b;
	}
}
