#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * doneby emmygreat
 * @s: string to encode
 * Return: the address of s
 */

char *leet(char *s)
{
	int q, w;
	char e[] = "aAeEoOtTlL";
	char r[] = "4433007711";

	for (q = 0; *(s + q); q++)
	{
		for (w = 0; w <= 9; w++)
		{
			if (e[w] == s[q])
				s[q] = r[w];
		}
	}
	return (s);
}
