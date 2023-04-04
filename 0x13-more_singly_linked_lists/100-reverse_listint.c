#include "lists.h"
/**
 * reverse_listint - Title
 * @head: first
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	if (*head == NULL)
		return (NULL);
	p1 = *head;
	*head = (*head)->next;
	p1->next = NULL;
	while (*head)
	{
		p2 = *head;
		*head = (*head)->next;
		p2->next = p1;
		p1 = p2;
	}
	*head = p1;
	return (*head);
}
