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

/**
 * print_alphabet_x10 - Print the alphabet ten times in lowercase
 *
 * Description: This function calls print_alphabet ten times, each followed
 * by a newline character, to print the lowercase alphabet ten times.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
