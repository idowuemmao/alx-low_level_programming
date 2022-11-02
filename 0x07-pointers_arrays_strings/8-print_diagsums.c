#include "main.h"
#include <stdio.h>

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
	int g, h = 0, j = 0, k;

	for (g = 0; g < size; g++)
	{
		k = (g * size) + g;
		h += a[k];
	}
	for (g = 1; g <= size; g++)
	{
		k = (g * size) - g;
		j += a[k];
	}
	printf("%d, %d\n", h, j);
}
