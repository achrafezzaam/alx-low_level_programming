#include <stdio.h>
/**
 * main - Print all the numbers from 0 to 9
 *
 * Description: Using putchar to print all
 * the one digit numbers from 0 to 9 separated by ", "
 * Retrun: 0
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		putchar(32);
		putchar(44);
		if (i == 57)
		{
			putchar('\n');
		}
		i++;
	} while (i<58);
       return (0);	
}
