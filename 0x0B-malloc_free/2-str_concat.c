#include <stdlib.h>
/**
 * str_concat - concatanate two strings given as parameters
 * @s1: first string to concatanate
 * @s2: second string to concatanate
 *
 * Description: Concatanate the string pointed
 * to by s2 with the string pointed to by s1
 * and stores the result in the allocated memory
 * pointed to by p.
 * Return: returns a pointer to the
 * newly allocated space or NULL if the program fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2;
	char *p;

	do {
		size1++;
		i++;
	} while (s1[i] != '\0');
	i = 0;
	do {
		size2++;
		i++;
	} while (s2[i] != '\0');
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	p[i] = ' ';
	for (i = 0; i <= size2; i++)
	{
		p[i + size1] = s2[i];
	}
	return (p);
}
