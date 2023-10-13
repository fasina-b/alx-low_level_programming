#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for finding the largest prime factor of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long max_prime = -1;

	long i;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max_prime = n;
	}

	printf("%ld\n", max_prime);

	return (0);
}
