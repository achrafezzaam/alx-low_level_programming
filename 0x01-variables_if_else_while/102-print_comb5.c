#include <stdio.h>
/**
 * main - Print all the combinations of two two digit numbers
 *
 * Description: Using putchar to print all
 * the combinations of two two digit numbers
 * ranging from 00 to 99.
 * Return: 0
 */
int main(void)
{
	int x = 0;
	
	do {
		int y = x + 1;

		do {
			int i , j, k, l = 0;

			i = (int) x / 10;
			j = (int) x % 10;
			k = (int) y / 10;
			l = (int) y % 10;
			putchar(i);
			putchar(j);
			putchar(32);
			putchar(k);
			putchar(l);
			if (x != 98 || y != 99)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				putchar('\n');
			}
			y++;
		} while (y < 100);
		x++;
	} while (x < 99);
	return (0);
}
