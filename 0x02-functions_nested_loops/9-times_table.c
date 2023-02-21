#include "main.h"
/**
 * times_table - check if entry is lower case
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 */
void format_intput(int c)
{
	int a, b;
	
	if (c > 9)
	{
		a = c / 10 + 48;
		b = c % 10 + 48;
		_putchar(a);
		_putchar(b);
	}
	else
	{
		_putchar(32);
		_putchar(c+48);
	}
}
void times_table(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		_putchar(44);
		for(j = 1; j < 10; j++)
		{
			z = i * j;
			_putchar(32);
			format_intput(z);
			if (j != 9)
			{
				_putchar(44);
			}
		}
		_putchar(10);
	}
}
