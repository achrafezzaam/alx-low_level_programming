#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Auth: Ezzaam Achraf
 * Description: Header file that defines
 * the structure dog.
 */

/**
 * struct dog - Type describing a dog.
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog owner's name
 *
 * Description: Create a new data type called dog
 * with the three parameters: name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
