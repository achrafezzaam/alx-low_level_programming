#include "lists.h"
/**
 * print_list - print all the elements of a list_t list.
 * @h: pointer to the first element of the list
 *
 * Description: print the list_t elements and returns
 * the count of the list's nodes
 * Return: Return 0 if h is NULL or the number
 * of list_t nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *next_p = NULL;

	if (h == NULL)
		return (0);
	next_p = h;
	do {
		count++;
		if (next_p->str != NULL)
			printf("[%d] %s\n", next_p->len, next_p->str);
		else
			printf("[%d] (nil)\n", next_p->len);
		next_p = next_p->next;
	} while (next_p != NULL);
	return (count);
}
