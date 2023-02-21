#include "main.h"
/**
 * print_sign - check if entry is positive or negative
 * @c: The value to check
 *
 * Description: Check if the given integer is positive,
 *  negative or null
 * Return: return + if the entry is positive, 0 if null
 * and return - if it's negative
 */
int print_sign(int c)
{
	char val = "";

	if (c > 0)
	{
		val = "+"
	}
	else
	{
		val = (c == 0 ? "0" : "-")
	}
	return (val);
}
