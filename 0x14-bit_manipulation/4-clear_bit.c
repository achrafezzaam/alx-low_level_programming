#include "main.h"
/**
 * clear_bit - Set the value of a given index to 0
 * @n: A pointer to the bit
 * @index: The index to set the value of
 *
 * Return: return -1 if the index value is greater than @n
 * otherwise return 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	n &= ~(1 << index);
	return (1);
}
