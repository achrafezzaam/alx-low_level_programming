#include "main.h"
/**
 * print_sign - check if entry is positive or negative
 * @c: The value to check
 *
 * Description: Check if the given integer is positive,
 *  negative or null
 * Return: return + if the entry is positive, 0 if null
 * and return - if it's negative
 */
int print_sign(int c)
{
	int val;

	if (c > 0)
	{
		val = 1;
		_putchar(43);
	}
	else if (c == 0)
	{
		val = 0;
		_putchar(48);
	}
	else
	{
		val = -1;
		_putchar(45);
	}
	return (val);
}
