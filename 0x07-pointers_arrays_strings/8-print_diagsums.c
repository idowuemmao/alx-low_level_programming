#include "main.h"

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * done by emmygreat
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int a, b, c, d = 0, e = 0;

	for (a = 0; a < size; a++)
	{
		c = (a * size) + a;
		d += *(a + c);
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - 1 - b);
		e += *(a + c);
	}
	print ("%i, %i\n", d, e);
}
