#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: The size of the array.
 * @c: The character used for initialization.
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
