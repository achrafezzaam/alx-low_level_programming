#include <stdio.h>
/**
 * main - Prints the program's name.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Teh program prints the name of the file
 * by printing the argv[0] value.
 * Return: return 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
