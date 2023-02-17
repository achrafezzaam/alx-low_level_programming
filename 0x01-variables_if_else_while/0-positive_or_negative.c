#include <stdlib.h>
#include <time.h>
/**
 *main - Prints if a random number positive or negative
 *
 * Description: Generate a random number and stores it
 * in the variavle n. Then procceeds to make a if else
 * to check if n is positive, negative or equal to 0
 * and prints the appropriate message
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n",n)
	}
	else if (n==0)
	{
		printf("%d is zero\n",n)
	}
	else
	{
		printf("%d is negative\n",n)
	}
	return (0);
}
