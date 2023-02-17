#include <stdio.h>
/**
 * main - Prints all lowercase characters
 *
 * Description: Use putchar to print characters
 * with an ASCII code from 97 to 122 (a to z)
 * except for those with the value 101 and 113
 * respectively 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	int i = 97;
	
	do {
		if  i != 101 && i != 113)
		{
			putchar(i);
			if (i == 122)
			{
				putchar('\n');
			}
		}
		i++;
	} while (i < 123);
	return (0);
}
