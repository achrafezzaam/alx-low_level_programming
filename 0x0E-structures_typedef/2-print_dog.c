#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the struct dog info
 * @d: The struct to print the info of
 *
 * Description: Print the info of the struct dog
 * pointed to by d. if any of d element is equal to NULL
 * it prints (nil) (ex: Name: (nill)).
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (d->age == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
