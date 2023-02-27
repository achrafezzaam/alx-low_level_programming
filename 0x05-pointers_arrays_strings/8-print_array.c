#include <stdio.h>
/**
 * print_array - Print n element of an array
 * @a: the array to print
 * @n: the number of elements to print
 *
 * Description: Print n element of the pointed
 * to array by a. Each element is seperated by a ", ".
 * Add a return to the line at the end
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
