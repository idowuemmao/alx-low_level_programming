#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * done by emmygreat
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}