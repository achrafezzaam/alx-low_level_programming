#include <stdbool.h>
/**
 * spacer - Compares a character to an array of special characters
 * @c: the character to check
 *
 * Description: spacer checks if the character c
 * is equal to any of the spc characters.
 * the spc characters are ,, ;, ., !, ?, \", (, ), {, and }
 * Return: returns true if c is in spc
 * and false if not.
 */
bool spacer(char c)
{
	int spc[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (c == spc[i])
			return (true);
	}
	return (false);
}
/**
 * cap_string - Capitalaze all the words following a separator
 * @str: the string to format
 *
 * Description: loop trough str and capitalise
 * each word i that fills the condition of str[i-1] == true
 * Return: returns a pointer to the formated string str
 */
char *cap_string(char *str)
{
	int i = 0;

	do {
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((i != 0 && spacer(str[i - 1])) || i == 0)
				str[i] -= 32;
		}
		i++;
	} while (str[i] != '\0');
	return (str);
}
