#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - check if entry is lower case
 * @c: The character to check
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

	a = abs(a);
	x = a / 100 + 48;
	y = (a % 100) /10 + 48;
	z = a % 10 + 48;
	_putchar(neg);
	if (x != 48)
	{
		_putchar(x);
		_putchar(y);
	}
	else if (y != 48)
	{
		_putchar(y);
	}
	_putchar(z);
}
void print_to_98(int a)
{
	do
	{
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
