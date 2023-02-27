#include <string.h>
/**
 * rev_string - prints a string in  reverse
 * @s: string to reverse
 *
 * Description: take a pointer to a string variable
 * then prints the sentence in reverse using
 * the _putchar function
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1, j = 0;
	char temp;

	while (i >= j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
