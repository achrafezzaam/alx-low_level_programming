#include <stdio.h>
/**
 * main - Prints all lowercase characters
 *
 * Description: Use putchar to print characters 
 * with an ASCII code from 97 to 122 (a to z)
 * return: 0
 */
int main(void)
{
	int i = 97;
	do {
		putchar(i);
		if (i == 122)
		{
			putchar('\n');
		}
		i++;
	} while (i < 123);
	return (0);
}
