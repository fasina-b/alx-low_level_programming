#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters in the terminal
 * @size: the size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
