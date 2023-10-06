#include <stdio.h>
/**
 * main - Start
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;  /* Declare an integer variable */

	/* Loop through numbers 0 to 9 */
	for (num = 0; num <= 9; num++)
	{
		/* Use putchar to print the current digit as a character */
		putchar(num + '0');
	}

	/* Print a new line at the end */
	putchar('\n');

	return (0);
}
