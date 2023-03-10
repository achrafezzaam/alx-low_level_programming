#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the program's name.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Teh program prints the name of the file
 * by printing the argv[0] value.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		r = a * b;
		printf("%d\n", r);
	}

	return (0);
}
