#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i;
	int j;

	char leetLetters[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leetLetters[j]; j++)
		{
			if (str[i] == leetLetters[j])
			{
				str[i] = leetReplacements[j];
				break;
			}
		}
	}

	return (str);
}
