#include "function_pointers.h"
/**
 * array_iterator - Print an array elements
 * @array: The array to print
 * @size: The array size
 * @action: The function that will print the elements
 *
 * Description: Uses the function pointed to by action
 * to print the elements of the array pointed to by array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
