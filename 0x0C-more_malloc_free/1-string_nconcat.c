#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * done by emmygreat
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, a = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[z])
		z++;

	if (n >= z)
		a = x + z;
	else
		a = x + n;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);

	z = 0;
	while (y < a)
	{
		if (y <= x)
			str[y] = s1[y];
		if (y >= x)
		{
			str[y] = s2[k];
			k++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
