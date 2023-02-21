#include "main.h"
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
	unsigned long a_1, a_2, b_1, b_2;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a_1 = a / 10000000000;
	b_1 = b / 10000000000;
	a_2 = a % 10000000000;
	b_2 = b % 10000000000;

	for (j = 93; j < 99; j++)
	{
		h1 = a_1 + b_1;
		h2 = a_2 + b_2;
		if (a_2 + b_2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (j != 98)
			printf(", ");

		a_1 = b_1;
		a_2 = b_2;
		b_1 = h1;
		b_2 = h2;
	}
	printf("\n");
	return (0);
}
