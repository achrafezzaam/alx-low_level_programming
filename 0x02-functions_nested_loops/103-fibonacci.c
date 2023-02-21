#include <stdio.h>
/**
 * main - check if entry is lower case
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
