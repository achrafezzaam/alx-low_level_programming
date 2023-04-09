#include "main.h"
/**
 * get_bit - Gets the bit at a certain index
 * @n: The number to search from
 * @index: The number's index to get the value of
 *
 * Description: The function makes sure that the index value
 * isn't greater than the binary size of n. the performs a left shift
 * of index length then returns it's value.
 * Return: Return -1 if the index is greater than the binary size of n.
 * Or the value of the bite at the index position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n >> index & 1) == 0)
		return (0);
	return (1);
}
