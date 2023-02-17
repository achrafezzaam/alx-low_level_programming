#include <stdio.h>
/**
 * main - Print all the combination of two one digit numbers
 *
 * Description: Using putchar to print the combination of
 * two one digit numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i = 48;

	do {
		int j = i + 1;

		do {
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				putchar('\n');
			}
			j++;
		} while (j < 58);
		i++;
	} while (i < 57);
	return (0);
}
