#include "main.h"
/**
 * print_binary - Print the binary value of an unsigned int
 * @n: the number to print
 *
 * Description: make a recursive call to print_binary
 * to print the number n in a binary form
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
