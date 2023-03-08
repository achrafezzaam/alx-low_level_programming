/**
 * is_prime_number - Check if a number is prime or not
 * @n: number to check
 *
 * Description: make recursive calls to check
 * if n is a prime number or not.
 * Return: will return 1 if n is a prime number
 * otherwhise it'll return 0.
 */
int is_prime_number(int n)
{
	static int i = 2;

	if (n <= 1)
	{
		i = 2;
		return (0);
	}
	if (n == i)
	{
		i = 2;
		return (1);
	}
	if (n % i == 0)
	{
		i = 2;
		return (0);
	}
	i++;
	return (is_prime_number(n));
}
