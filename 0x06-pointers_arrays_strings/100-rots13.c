#include "main.h"

/**
 * rot13 - functions to encods a string using rot13
 * @s: string to encode
 * Done by emmygreat
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int c, v;
	char b[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char h[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (c = 0; *(s + c); c++)
	{
		for (v = 0; v < 52; v++)
		{
			if (b[v] == *(s + c))
			{
				*(s + c) = h[v];
				break;
			}
		}
	}
	return (s);
}
