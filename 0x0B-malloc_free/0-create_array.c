#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the array size
 * @c: the character to initialize the array with
 *
 * Description: Create an array of size size and
 * initialize it with the character c.
 * If the size is equal to 0, the returned valaues is NULL.
 * Return: returns a pointer to the created array or NULL
 * if the size is equal to 0.
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
