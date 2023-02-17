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
	int i = 48;

	do {
		int j = 48;

		do {
			int k = 48;

			do {
				int l = 48;

				do {
					if ((i * 100 + j) <  (k * 100 + l))
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						if (i != 57 || j != 56 || k != 57 || l != 57)
						{
							putchar(44);
							putchar(32);
						}
						else
						{
							putchar('\n');
						}
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
