#include "main.h"

/**
 * flip_bits - Returns the number of bits needed
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output = n ^ m;
	unsigned int added = 0;

	while (output > 0)
	{
		/* Increment added for each set bit in output */
		added += output & 1;
		output >>= 1; /* Right shift to check the next bit */
	}

	return (added);
}
