#include "main.h"
#include <stdlib.h>
/**
 * format_input - check if entry is lower case
 * @a: The number to format
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
void format_input(int a)
{
	int x, y, z;
	int neg = a >= 0 ? 0 : 45;

	a *= -1;
	x = a / 100;
	y = (a % 100) / 10;
	z = a % 10;
	if (!neg)
		_putchar(neg);
	if (x != 0)
	{
		_putchar(x + '0');
		_putchar(y + '0');
	}
	else if (y != 0)
	{
		_putchar(y + '0');
	}
	_putchar(z + '0');
}
/**
 * print_to_98 - check if entry is lower case
 * @a: The start number
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
void print_to_98(int a)
{
	do {
		format_input(a);
		if (a < 98)
		{
			a++;
		}
		else if (a > 98)
		{
			a--;
		}
		else
		{
			_putchar(10);
			break;
		}
		_putchar(44);
		_putchar(32);
	} while (1);
}
