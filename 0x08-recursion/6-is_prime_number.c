#include "main.h"

/**
 * prime_a - Calculate if a number is a prime number.
 * @a: input number
 * @b: divisor number
 * Return: 1 if prime, 0 otherwise.
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && b == 0))
		return (0);
	else if (a == b)
		return (1);

	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - Detect if a number is a prime number.
 * @n: input number
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
