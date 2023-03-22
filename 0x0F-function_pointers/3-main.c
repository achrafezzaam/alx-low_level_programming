#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Perform simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of arguments.
 *
 * Description: Takes the 2nd and 4th arguments and turn them
 * to integers then applies the function pointed to by
 * the 3rd argument.
 * Return: Will always return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
