#include "main.h"
/**
 * get_endianness - Check the endianness of a system
 *
 * Return: return 0 if Big-endian or 1 if Little-endian
 */
int get_endianness(void)
{
	int i = 1;
	char *ans = (char *)&i;

	if (*ans == 1)
		return (1);
	return (0);
}
