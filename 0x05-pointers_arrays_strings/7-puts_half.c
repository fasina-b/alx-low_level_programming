#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length + 1) / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
