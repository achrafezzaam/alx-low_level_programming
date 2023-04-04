#include "lists.h"
/**
 * free_listint2 - Title
 * @head: first
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
