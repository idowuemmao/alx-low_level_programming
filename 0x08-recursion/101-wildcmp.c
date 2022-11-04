#include "main.h"

/**
 * str_checker -checks if w strings are identical
 * @s1: string 1
 * @s2: string 2
 * @i: left index
 * @j: special index
 * done by emmygreat
 * Return: 1 if is palindrome, 0 otherwise
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, J + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j)) || str_checker(s1, s2, i, j + 1);
	return (0);
}

/**
 * wildcmp - check if string could be considered identical
 * @s1: base address
 * @s2: base address
 *
 * Return: 1
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
