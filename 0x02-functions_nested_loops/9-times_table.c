#include "main.h"

/**
 * times_table - Print the times table in the specified format
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
