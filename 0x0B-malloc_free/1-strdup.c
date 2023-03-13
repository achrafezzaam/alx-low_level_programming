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
	unsigned int i = 0, size;
	char *p;

	if (str == NULL)
		return (NULL);
	do {
		size++;
		i++;
	} while (str[i] != '\0');
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
