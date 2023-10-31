#include <stdlib.h>
#include "main.h"

/**
 * word_count - The helper function to count the number of words
 * @s: The input string to evaluate
 * Return: The number of words in the string
 */
int word_count(char *s)
{
	int is_inside_word, char_index, word_count;

	is_inside_word = 0;
	word_count = 0;

	for (char_index = 0; s[char_index] != '\0'; char_index++)
	{
		if (s[char_index] == ' ')
			is_inside_word = 0;
		else if (is_inside_word == 0)
		{
			is_inside_word = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * **strtow - This splits a string into words
 * @str: The input string to split
 * Return: Pointe (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **word_matrix, *temp_word;
	int index, k = 0, len = 0, num_words, char_index = 0, start_index, end_index;

	while (*(str + len))
		len++;
	num_words = word_count(str);
	if (num_words == 0)
		return (NULL);

	word_matrix = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (word_matrix == NULL)
		return (NULL);

	for (index = 0; index <= len; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (char_index)
			{
				end_index = index;
				temp_word = (char *)malloc(sizeof(char) * (char_index + 1));
				if (temp_word == NULL)
					return (NULL);
				while (start_index < end_index)
					*temp_word++ = str[start_index++];
				*temp_word = '\0';
				word_matrix[k] = temp_word - char_index;
				k++;
				char_index = 0;
			}
		}
		else if (char_index++ == 0)
			start_index = index;
	}

	word_matrix[k] = NULL;

	return (word_matrix);
}
