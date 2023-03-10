#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: print the name of the current program.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (argc);
}