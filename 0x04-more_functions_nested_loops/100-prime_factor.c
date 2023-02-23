#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143, prime;

	while (prime < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (prime = 3; prime < (num / 2); prime += 2)
		{
			if ((num % prime) == 0)
				num /= prime;
		}
	}

	printf("%ld\n", num);

	return (0);
}
