#ifndef ALX_HEADER
#define ALX_HEADER

/*
 * File: variadic_functions.h
 * Auth: Ezzaam Achraf
 * Description: includes all the project's
 * function prototypes.
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
