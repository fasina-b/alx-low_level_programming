#include <stdio.h>
/**
 * main - Start
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
