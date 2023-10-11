#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * using the _putchar function.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
