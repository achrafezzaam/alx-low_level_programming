#ifndef ALX_HEADER
#define ALX_HEADER

/*
 * File: variadic_functions.h
 * Auth: Ezzaam Achraf
 * Description: includes all the project's
 * function prototypes and struct types.
 */

#include <stdarg.h>
/**
 * struct p_type - A structure for printing
 * @symbol: character used to chose the printing type
 * @p: A function pointer to the corresponding
 * printer function.
 */
typedef struct p_type
{
	char *symbol;
	void (*p)(va_list arg);
} p_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
