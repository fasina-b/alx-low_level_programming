#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int added = 1;
	char *count = (char *)&added;

	/* If the value of the first byte is 1, little endian */
	return (*count);
}
