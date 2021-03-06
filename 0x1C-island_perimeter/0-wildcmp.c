#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two string
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if dentical, otherwise return 0
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (s2[0] == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2))
			return (1);
		else
			return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
