/**
 * leet - incode a string to 1337
 * @str: the string to incode
 *
 * Description: Turns the characters a, e, o, t and l
 * respectively to 4, 3, 0, 7, 1
 * Return: return a pointer to the encoded string str
 */
char *leet(char *str)
{
	int i, j;
	char chars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char val[5] = {'4', '3', '0', '7', '1'};

	do {
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == chars[j])
				str[i] = val[j / 2];
		}
		i++;
	} while (str[i] != '\0');
	return (str);
}
