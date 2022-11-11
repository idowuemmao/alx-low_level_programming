#include "main.h"

/**
 * malloc_checked - a function that allocateds memory using malloc
 * done by emmygreat
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
