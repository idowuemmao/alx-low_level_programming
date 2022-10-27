#include "main.h"

/**
 * reverse_array - function that reverse the content of an array of integer
 * @a: array
 * @n: integer
 * Done by emmygreat
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int m, p;

	for (m = 0; (m < (n - 1) / 2); m++)
	{
		p = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = p;
	}
}
