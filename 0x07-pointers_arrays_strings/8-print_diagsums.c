#include <stdio.h>
/**
 * print_diagsums - two 2D array's diagonals sum
 * @a: the 2D array
 * @size: the size of the array
 *
 * Description: takes the two diagonals
 * of a square array and prints they're sum.
 */
void print_diagsums(int *a, int size)
{
	int i, b = 0, c = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		b += a[i];
	}
	for (i = (size - 1); i < (size * size - 1); i += (size - 1))
	{
		c += a[i];
	}
	printf("%d, %d\n", b, c);
}
