#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index.
 * @n: The number to extract the bit from
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* If index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift the bits of n to the right*/
	return (n >> index & 1);
}
