#include "main.h"

/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: first occurrence
 * @accept: matches one of the bytes
 * done by emmygreat
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int u;

	while (*s)
	{
		for (u = 0; accept[u]; u++)
		{
			if (*s == accept[u])
				return (s);
		}
		s++;
	}
	return (NULL);
}
