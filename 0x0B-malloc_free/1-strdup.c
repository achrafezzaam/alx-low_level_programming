#include <stdlib.h>
/**
 * _strdup - copy the string given as parameter
 * @str: the string to copy
 *
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * Return: returns a pointer to the
 * newly allocated space or NULL if str = NULL
 * or insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *p;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		p[index] = str[index];
	p[len] = '\0';
	return (p);
}
