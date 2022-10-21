#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int row, hashes, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (spaces = n - row; spaces > 0; spaces--)
			{

				_putchar(' ');
			}

			for  (hashes = 1; hashes <= row; hashes++)
			{

				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
