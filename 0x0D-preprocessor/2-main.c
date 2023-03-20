#include <stdio.h>
/**
 * main - Prints the name of the current file
 *
 * Description: Use the macro __FILE__ to
 * print the current file name to the user
 * Return: always return 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
