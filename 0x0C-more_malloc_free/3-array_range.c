#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: The pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
