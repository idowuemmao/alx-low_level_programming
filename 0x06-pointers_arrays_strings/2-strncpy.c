#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: The source
 * @dest: destination
 * @n: length of int
 *
 * done by emmygreat
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int w;

	for (w = 0; w < n && *(src + w); w++)
	{
		*(dest + w) = *(src + w);
	}
	for (; w < n; w++)
	{
		*(dest + w) = '\0';
	}

	return (dest);
}
