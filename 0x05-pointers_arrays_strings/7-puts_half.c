#include <string.h>
#include "main.h"
/**
 * puts_half- prints half of a string
 * @str: the string to print
 *
 * Description: takes a pointer as parameter
 * then prints the second half of the pointed string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
