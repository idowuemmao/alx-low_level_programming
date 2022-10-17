#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, g;

	for (d = 48; d < 56; d++)
	{
		for (g = 49; g < 57; g++)
		{
			if (d > g)
			{
				putchar((d % 10) + '0');
				putchar((g % 10) + '0');
				if (d != 56 || g != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
