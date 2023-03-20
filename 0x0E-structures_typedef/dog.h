#ifndef ALX_HEADER
#define ALX_HEADER

/*
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

#endif