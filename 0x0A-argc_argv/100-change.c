#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins for change.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	
	num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < num_denominations; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}
