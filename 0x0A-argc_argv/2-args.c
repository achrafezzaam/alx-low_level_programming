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
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
