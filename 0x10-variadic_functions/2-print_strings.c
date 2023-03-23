#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string followed by new line
 * @separator: Pointer to the parameters separator
 * @n: Number of strings to print
 *
 * Description: Does teh same as print_numbers for strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *x;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == 0)
			printf("(nil)");
		else
			printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
