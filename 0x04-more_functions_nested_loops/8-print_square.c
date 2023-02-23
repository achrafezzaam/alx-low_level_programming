#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int ht, wth;

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (wth = 0; wth < size; wth++)
				_putchar('#');

			if (ht == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
