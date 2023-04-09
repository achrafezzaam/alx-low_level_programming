#include "main.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: pointer to the string of bits to convert
 *
 * Description: This function checks if the given string
 * pointed to by b isn't NULL, then it loops through it
 * to see if it includes any non binary values. Then finaly
 * it will perform a left shift then add 1 to the output
 * if it finds a '1' value in the string.
 * Return: Return 0 if b is NULL or the string pointed to by b
 * has any values other than 0 or 1. Or return the converted
 * binary value to int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ans = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		ans <<= 1;
		if (b[i] == '1')
			ans += 1;
	}
	return (ans);
}
