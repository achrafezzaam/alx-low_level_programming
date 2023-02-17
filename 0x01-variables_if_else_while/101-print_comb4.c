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
		int j = i + 1;

		do {
			int k = j + 1;

			do {
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					putchar('\n');
				}
				k++;
			} while (k < 58);
			j++;
		} while (j < 57);
		i++;
	} while (i < 56);
	return (0);
}
