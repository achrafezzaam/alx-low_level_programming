/**
 * string_toupper - Turns all lower case characters to uppercase
 * @str: the string to format
 *
 * Description: string_toupper loops through str
 * and turns each lowercase character to
 * an uppercase one.
 * Return: return a pointer to the formated string str
 */
char *string_toupper(char *str)
{
	int i = 0;

	do {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	} while (str[i] != '\0');
	return (str);
}
