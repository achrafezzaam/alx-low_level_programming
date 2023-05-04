#include "main.h"
/**
 * get_bit - Give the value of a bit in the position index in a number
 * @n: the number to check
 * @index: the index to check
 *
 * Return: return the value of the bit at position index
 * in the number n or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (((n >> index) & 1) == 0)
		return (0);
	return (1);
}
