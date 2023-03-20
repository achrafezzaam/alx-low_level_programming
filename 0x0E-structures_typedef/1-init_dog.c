#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog owner
 *
 * Description: Initialize a new struct dog using
 * the given value of age and the values pointed to by
 * name and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
