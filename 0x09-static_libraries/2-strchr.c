#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * done by emmygreat
 *
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
