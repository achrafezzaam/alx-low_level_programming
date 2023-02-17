#include <stdio.h>
/**
 * main - Print all the numbers from 0 to 9
 *
 * Description: Using putchar to print all
 * the one digit numbers from 0 to 9 separated by ", "
 * Return: 0
 */
int main(void)
{
	int x = 0;

	do {
		int y = x + 1;
		
		do {
			int i, j, k, l;

			i = (int) x / 10 + 48;
			j = (int) x % 10 + 48;
			k = (int) y / 10 + 48;
			l = (int) y % 10 + 48;
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
