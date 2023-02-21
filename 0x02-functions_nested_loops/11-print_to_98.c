#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - check if entry is lower case
 * @a: The start number
 *
 * Description: Use the islower function to check
 * if an entry is lowercase or uppercase
 * Return: return 1 if the entry is lowercase
 * and return 0 if it's uppercase
 */
void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a > 98)
			printf("%d, ", a--);
		printf("%d\n", a);
	}

	else
	{
		while (a < 98)
			printf("%d, ", a++);
		printf("%d\n", a);
	}
}
