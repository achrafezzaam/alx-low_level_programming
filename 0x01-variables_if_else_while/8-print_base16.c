#include <stdio.h>
/**
 * main - Print all the numbers from 0 to f
 *
 * Description: Using putchar to print all
 * the one digit numbers from 0 to f
 * Return: 0
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		i++;
	} while (i < 58);
	do {
		putchar(i + 39);
		if (i == 63)
		{
			putchar('\n');
		}
		i++;
	} while (i < 64);
	return (0);
}
