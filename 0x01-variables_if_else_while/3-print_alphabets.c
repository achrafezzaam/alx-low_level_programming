#include <stdio.h>
/**
 * main - Print all the lowercase characters followed by uppercase ones
 *
 * Description: Use putchar to print the characters with ASCII code
 * from 97 to 122 (a to z) then those from 65 to 90 (A to Z)
 * Return: 0
 */
int main(void)
{
	int i = 97;

	do {
		putchar(i);
		i++;
	} while (i < 123);
	i = 65;
	do {
		putchar(i);
		if (i == 90)
		{
			putchar('\n');
		}
		i++;
	} while (i < 91);
	return (0);
}
