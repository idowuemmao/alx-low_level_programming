#include "main.h"
#include <stdio.h>

/**
 * print_line -function that prints an integer
 * @c: buffer to pring
 * @s: bytes of buffer to print
 * @l: line of buffer to pring
 *
 * done by emmygreat
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int k, j;

	for (k = 0; k <= 9; k++)
	{
		if (k <= s)
			printf("%02x", c[l * 10 + k]);
		else
			printf(" ");
		if (k % 2)
			putchar(' ');
	}
	for (j = 0; j <= s; j++)
	{
		if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
			putchar(c[l * 10 + j]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - function to print a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * done by emmygreat
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int y;

	for (y = 0; y <= (size - 1) / 10 && size; y++)
	{
		printf("%08x: ", y * 10);
		if (y < size / 10)
		{
			print_line(b, 9, y);
		}
		else
		{
			print_line(b, size % 10 - 1, y);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
