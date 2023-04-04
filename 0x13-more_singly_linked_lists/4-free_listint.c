#include "lists.h"
/**
 * free_listint - Title
 * @head: first
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
