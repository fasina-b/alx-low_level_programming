#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * @s: Pointer to the memory area
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
