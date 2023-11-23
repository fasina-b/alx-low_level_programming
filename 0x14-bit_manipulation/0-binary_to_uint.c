#include "main.h"

/**
 * binary_to_uint - Used for conveting binary numbers to an unsigned ints.
 * @b: Pointer to string - 0 and 1 chars.
 *
 * Return: The converted number, or 0 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	/* This checks if the character is not '0' or '1' */
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		/* Left shift the result by 1 and add the current bit */
		output = (output << 1) | (*b - '0');
		b++;
	}

	return (output);
}
