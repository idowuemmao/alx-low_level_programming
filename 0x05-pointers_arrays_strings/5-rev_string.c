#include "main.h"

/**
 * rev_string -A function that reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Return: void
 */

void rev_string(char *s)
{
	int m, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (m = 0; m < (c / 2); m++)
	{
		aux = s[m];
		s[m] = *a;
		*a = aux;
		a--;
	}
}
