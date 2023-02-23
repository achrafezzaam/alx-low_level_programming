#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, index;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (index = size - row; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < row; index++)
				_putchar('#');

			if (row == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

