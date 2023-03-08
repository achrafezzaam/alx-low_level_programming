#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: the string to print
 *
 * Description: prints the string pointed to by s
 * by making recursive calls to _print_rev_recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
