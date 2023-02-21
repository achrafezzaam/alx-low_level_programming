#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check if entry is lower case
 * @c: The character to check
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
int print_last_digit(int c)
{
	int r = c % 10;

	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}
