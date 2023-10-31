#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: The string to be copied.
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int length, i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
