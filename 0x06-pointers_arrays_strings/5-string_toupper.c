#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * done by emmygreat
 * @p: string
 *
 * Return: char var
 */

char *string_toupper(char *p)
{
	int g = 0;

	while (*(p + g))
	{
		if (*(p + g) >= 'a' && *(p + g) <= 'z')
			*(p + g) -= 'a' - 'A';
		g++;
	}
	return (p);
}
