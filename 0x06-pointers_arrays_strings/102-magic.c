#include "main.h"
#include <stdio.h>

/**
 * main - a line of code to print a[2] = 98
 * done by emmygreat
 * Return: int
 */

int main(void)
{
	int m;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &m;

	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
