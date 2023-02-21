#include "main.h"
/**
 * print_alphabet_x10: print lower characters 10 times
 *
 * Description: Make a call to the print_alphabet
 * function to print characters 10 times
 * with an ASCII code from 97 to 122 (a to z)
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for(i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
	}
}
