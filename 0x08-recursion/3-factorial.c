/**
 * factorial - Gives the factorial of a number
 * @n: the number to factorial
 *
 * Description: takes n as an input add calculate
 * it's factorial using recursive calls
 * Return: return -1 if n is lower than 0,
 * 1 if n is equal to 0 and the result if n is greater than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
