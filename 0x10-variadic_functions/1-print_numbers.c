#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers with given separator.
 * @separator: The numbers separator
 * @n: The number of parameters to print
 *
 * Description: Print the numbers given as
 * parameters separed by the separator pointed to by separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
