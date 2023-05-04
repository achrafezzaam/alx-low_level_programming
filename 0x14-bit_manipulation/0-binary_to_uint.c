#include "main.h"
/**
 * binary_to_uint - Convert a binary number to unsigned int
 * @b: the binary number to convert
 *
 * Return: return the converted number or 0 if b
 * has one or more non binary character or when b
 * is equal to NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == '1')
			res += 1;
	}

	return (res);
}
