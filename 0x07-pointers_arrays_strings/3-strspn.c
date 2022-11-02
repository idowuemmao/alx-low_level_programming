#include "main.h"

/**
 * _strspn - a function that gets the length of
 * a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes
 * done by emmygreat
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (c = 0; accept[y] != '\0'; c++)
			{
				if (s[b] == accept[c])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
