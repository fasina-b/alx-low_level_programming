#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *s);

/**
 * argstostr - Concatenate all the arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of strings (arguments).
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, j, k;
	char *result;

	total_length = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
		total_length += _strlen(av[i]) + 1;

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0, j = 0; av[i]; i++)
	{
		for (k = 0; av[i][k]; k++)
			result[j++] = av[i][k];
		result[j++] = '\n';
	}

	result[total_length] = '\0';
	return (result);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
