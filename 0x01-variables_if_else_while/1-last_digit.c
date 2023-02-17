#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print a numbers last digit
 *
 * Description: Print a message depending on the modulo by 10
 * of the generated number 
 * return: 0
 */
int main(void)
{
	int n;
	int last_digt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digt = n%10;
	if (last_digt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digt);
	}
	else
	{
	       	if (last_digt == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_digt);
		}
		else
		{
			printf("Lastdigit of %d is %d and is less than 6 and not 0\n", n, last_digt);
		}
	}
	return (0);
}
