#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all it's parameters
 * @n: The number of the parameters to sum
 *
 * Description: sum_them_all is a variadic function
 * that gives teh sum of all it's parameters.
 * Return: Will return 0 if hte value of n i equal or less
 * than 0. Or the sum of all it's parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n <= 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
