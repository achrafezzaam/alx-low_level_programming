#include "lists.h"
/**
 * pop_listint - Title
 * @head: first
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = p->next;
	n = p->n;
	free(p);
	return (n);
}
