#include <stdio.h>
/**
 *  _sqrt_recursion - Gives the square root of a number
 * @n: the number to give the square root of
 *
 * Description: gives the value of the
 * square root of x.
 * Return: return -1 if n doesn't have a natural square root,
 * or the square root of n.
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (n < 1 || i == n / 2)
	{
		i = 2;
		return (-1);
	}
	if (i * i == n)
	{
		int r = i;

		i = 2;
		return (r);
	}
	i++;
	return (_sqrt_recursion(n));
}
