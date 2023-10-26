#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

	return (prime_a(a, b + 1));
}
/**
 * compare_string - Compare strings
 * @s: string
 * @left: iterate
 * @right: iterate
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - Detects palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, strlen_recursion(s - 1)));
}
