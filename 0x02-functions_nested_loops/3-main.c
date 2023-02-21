#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r,a,b;

    a = print_last_digit(98);
    b = print_last_digit(-98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('0' + a);
    _putchar('0' + b);
    _putchar('\n');
	return (0);
}
