#include <stdio.h>
/**
 * main - Prints all lowercase characters in reverse
 *
 * Description: Use putchar to print characters
 * with an ASCII code from 122 to 97 (z to a)
 * Return: 0
 */
int main(void)
{
	int i = 122;

	do {
		putchar(i);
		if (i == 97)
		{
			putchar('\n');
		}
		i--;
	} while (i > 96);
	return (0);
}
