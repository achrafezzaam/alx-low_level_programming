#include "lists.h"
/**
 * get_nodeint_at_index - Title
 * @head: First
 * @index: Second
 *
 * Return: p
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	p = head;
	for (i = 0; i < index; i++)
		p = p->next;
	return (p);
}
