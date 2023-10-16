#include "main.h"

/**
 * _strcpy - Copies a string including the null byte to a buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_orig = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_orig);
}
