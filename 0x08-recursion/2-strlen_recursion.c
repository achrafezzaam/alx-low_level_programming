#include "main.h"
/**
 * _strlen_recursion - Gives the length of a string
 * @s: the string to get the length of
 *
 * Description: uses a recursive call to _strlen_recursion
 * to count the number of character of the string
 * pointed to by s.
 * Return: return the number of the characters in the
 * string pointed to by s.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
