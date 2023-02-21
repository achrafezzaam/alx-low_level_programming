#include "main.h"
/**
 * format_intput - check if entry is lower case
 * @c: input to format
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 */
void format_intput(int c)
{
	int a, b;

	a = c / 10 + 48;
	b = c % 10 + 48;
	_putchar(a);
	_putchar(b);
}
/**
 * jack_bauer - check if entry is lower case
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			format_intput(i);
			_putchar(58);
			format_intput(j);
			_putchar(10);
		}
	}
}
