#include "main.h"
/**
 * flip_bits - Count the number of bits to flip to go from value n to m
 * @n: The starting value
 * @m: The desired value
 *
 * Return: return the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m,  count = 0;

	while (comp)
	{
		count += (comp & 1);
		comp >>= 1;
	}
	return (count);
}
