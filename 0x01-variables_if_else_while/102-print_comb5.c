#include <stdio.h>
/**
 * main - Print all combinations of three one digit numbers
 *
 * Description: Using putchar to print all
 * the combinations of three one digit numbers
 * ranging from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i, j, k , l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (((k + l) > (i + j) &&  k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);

					if (i + j + k + l == 227 && i == 57)
					{
					break;
					}
					else
					{
					putchar(44);
					putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
