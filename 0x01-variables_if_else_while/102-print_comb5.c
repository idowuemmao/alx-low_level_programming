#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int d, f;

	for (d = 0; d < 100; d++)
	{
		for (f = 0; f < 100; f++)
		{
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				if (d != 98 || f != 99)
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
