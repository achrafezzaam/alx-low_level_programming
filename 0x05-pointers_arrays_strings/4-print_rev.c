#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in  reverse
 * @s: string to reverse
 *
 * Description: take a pointer to a string variable
 * then prints the sentence in reverse using
 * the _putchar function
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
