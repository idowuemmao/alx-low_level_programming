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
	int a = 0, b = 0, c;
	char d;

	while (s[a] != '\0')
	{
		a++
	}
	b = a - 1;
	for (c = 0; c < a / 2; c++)
	{
		d = s[c];
		s[c] = s[b];
		s[b--] = d;
	}
}
