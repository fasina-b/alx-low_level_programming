#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int start = 0;
	int end;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		/* Swap characters at the start and end positions */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the start and end positions */
		start++;
		end--;
	}
}
