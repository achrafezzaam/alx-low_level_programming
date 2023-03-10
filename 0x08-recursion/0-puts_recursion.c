#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: strign to print
 *
 * Description: prints the string pointed to by
 * s using recursive call to _puts_recursion.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{	_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
