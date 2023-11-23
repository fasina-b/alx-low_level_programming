#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	/* Checks if n is greater than 1 */
	if (n > 1)
		print_binary(n >> 1);

	/* Prints the least significant bit */
	_putchar((n & 1) + '0');
}
