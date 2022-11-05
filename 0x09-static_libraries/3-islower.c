#include "main.h"

/**
 * _islower - used to checks if a character is in lowercase
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase, but 0 (zero) otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
