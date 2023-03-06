#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to chess display
 *
 * Description: Prints a chess board by accessing
 * the board desplay saved in the 2D array pointed
 * to by a
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
