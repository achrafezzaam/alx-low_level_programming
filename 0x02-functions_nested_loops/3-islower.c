#include "main.h"
#include <ctype.h>
/**
 * print_alphabet - Prints all lowercase characters
 *
 * Description: Use _putchar to print characters
 * with an ASCII code from 97 to 122 (a to z)
 */
int _islower(int c)
{
	int r = islower(c);
	return (r ? 1 : 0);
}
