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
	int g, h = 0, j = 0;

	for (g = 0; g < size; g++)
	{
		h += a[(size + 1) * g];
		j += a[(size - 1) * (g + 1)];
	}
	print ("%d, %d\n", h, j);
}
