#include "main.h"

/**
 * _sqrt_recursive - Helper function for recursive square root calculation
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursive(n, 0));
}
