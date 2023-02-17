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
	int i = 48;

	do {
		int j = 48;

		do {
			int k = i;

			do {
				int l = j + 1;
				
				do {
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l !=57)
					{
						putchar(44);
						putchar(32);
					}
					else
					{
						putchar('\n');
					}
					l++;
				} while (l < 58);
				k++;
			} while (k < 58);
			j++;
		} while (j < 57);
		i++;
	} while (i < 58);
	return (0);
}
