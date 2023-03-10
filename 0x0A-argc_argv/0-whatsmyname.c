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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
