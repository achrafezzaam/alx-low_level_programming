#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory space allocated to the
 * struct dog
 * @d: pointer to the struct dog to free
 *
 * Description: Make a check to see if d is NULL
 * if not it will free the memory space of the name and owner
 * first then the d memory space.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
