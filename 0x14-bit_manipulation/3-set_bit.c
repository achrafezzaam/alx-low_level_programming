#include "main.h"
/**
 * set_bit - Set the value of bit at certain position to 1
 * @n: pointer to the number to manipulate
 * @index: the position to set to 1
 *
 * Return: return 1 if the program runs successfully
 * or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= 1 << index;
	return (1);
}
