#ifndef ALX_HEADER
#define ALX_HEADER

/*
 * File: function_pointers.h
 * Auth: Ezzaam Achraf
 * Description: This file includes
 * all the functions prototypes
 */

#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
