#include "main.h"
/**
 * print_alphabet - Prints all lowercase characters
 *
 * Description: Use _putchar to print characters
 * with an ASCII code from 97 to 122 (a to z)
 */
void print_alphabet(void)
{
	int i = 97;

	do {
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	} while (i < 123);
}
