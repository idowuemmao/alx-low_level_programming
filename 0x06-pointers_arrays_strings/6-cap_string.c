#include "main.h"

/**
 * cap_string - function to capitalize all words
 * in a string
 * done by emmygreat
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int a, d;

i	char f[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};


	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		for (d = 0; d < 13; d++)
		{
			if (s[a] == f[d])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
