#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 for a given index
 * @n: pointer to the bit
 * @index: the index to set the value of
 *
 * Return: return -1 if the value of index exceeds the size
 * of n or 1 if successfull
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
