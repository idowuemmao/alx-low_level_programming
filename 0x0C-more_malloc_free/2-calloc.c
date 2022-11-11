#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array,
 * using malloc
 * done by emmygreat
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int b = 0, c = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	a = malloc(b);

	if (a == NULL)
		return (NULL);

	while (c < b)
	{
		a[c] = 0;
		c++;
	}
	return (a);
}
