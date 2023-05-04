#include "main.h"
/**
 * clear_bit - Set the value of bit at certain position to 0
 * @n: The number to manipulate
 * @index: The position to set
 *
 * Return: Return 1 if the program runs successfully
 * or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
