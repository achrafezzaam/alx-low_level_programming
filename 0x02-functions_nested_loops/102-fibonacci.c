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
	int count;
	unsigned long a = 0, b = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
