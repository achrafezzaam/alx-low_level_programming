#include "lists.h"
/**
 * list_len - Return the number of elements of list_t
 * @h: pointer to the linked list
 *
 * Description: Get the number of elements
 * in a linked list.
 * Return: returns 0 if h is NULL
 * or the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
