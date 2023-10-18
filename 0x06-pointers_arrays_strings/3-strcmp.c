#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: The difference betwee.
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		s1++;
		s2++;
	}

	return (result);
}
