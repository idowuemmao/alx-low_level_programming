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
	char f[] = " \t\n,;.!?\"(){}";

	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
		{
			if (a == 0)
				*(s + a) -= 'a' - 'A';
			else
			{
				for (d = 0 d <= 12; d++)
				{
					if (f[d] == *(s + a - 1))
						*(s + a) -= 'a' - 'A';
				}
			}
		}
		a++;
	}
	return (s);
}
