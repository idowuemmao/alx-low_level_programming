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

	for (d = 0; d < 90; d++)
	{
		for (g = d + 1; g < 91; g++)
		{
			putchar((d % 10) + '0');
			putchar((g % 10) + '0');

			if (d == 89 && g == 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
