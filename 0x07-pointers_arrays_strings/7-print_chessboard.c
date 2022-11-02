#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to pieces to print
 * Done by emmygreat
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int q, w;

	for (q = 0; q < 8; q++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[q][w]);
		}
		_putchar('\n');
	}
}
