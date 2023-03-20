#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - Count the length of a string.
 * @str: The string to be measured.
 *
 * Description: Count the number of characters in
 * the string pointed to by str.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Create a copy of the source string.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Description: Make a copy of the string
 * pointed to by src and stores it in the
 * variable pointed to by dest
 * Return: A pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 *
 * Return: The created struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}
