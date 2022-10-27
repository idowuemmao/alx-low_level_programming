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
	int a = 0, d;
	int e = 13;
	
	char f[] = {32, '\t', '\n', 44, ';', 46, '!', '?',
		'"', '(', ')', '{', '}'};


	while (s[a])
	{
		d = 0;

		while (d < e)
		{
			if ((a == 0 || s[a - 1] == f[d]) &&
					(s[a] >= 97 && s[a] <= 122))
			s[a] -= 32;
			d++;
		}
		a++;
	}
	return (s);
}
