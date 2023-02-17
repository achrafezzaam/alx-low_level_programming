#include <stdio.h>
/**
 * main - Print numbers from 0 to 9
 *
 * Description: Print all the one digit integers
 * from 0 to 9 and adding a return to the line at the end
 * Return: 0
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		if (i == 9)
		{
			printf("\n");
		}
		i++;
	} while (i < 10);
	return (0);
}
