#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count;
	int is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * allocate_words - Allocate memory for an array of words.
 * @count: The number of words.
 * Return: A pointer to the allocated memory.
 */
char **allocate_words(int count)
{
	char **words;

	words = malloc((count + 1) * sizeof(char *));
	return (words);
}

/**
 * store_words - Split the string into words and store them in an array.
 * @str: The input string.
 * @words: The array to store words.
 */
void store_words(char *str, char **words)
{
	int i;
	int in_word;
	char *start = NULL;

	i = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				*str = '\0';
				words[i] = start;
				in_word = 0;
				i++;
			}
		}
		else if (!in_word)
		{
			start = str;
			in_word = 1;
		}
		str++;
	}

	if (in_word)
	{
		words[i] = start;
		i++;
	}

	words[i] = NULL;
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int count;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	count = count_words(str);
	if (count == 0)
	{
		return (NULL);
	}

	words = allocate_words(count);
	if (!words)
	{
		return (NULL);
	}

	store_words(str, words);

	return (words);
}
