#include "lists.h"
unsigned int get_len(dlistint_t **head)
{
	unsigned int len = 1;
	dlistint_t *buff = *head;
	
	if (buff == NULL)
		return (0);
	while (buff->next != NULL)
	{
		buff = buff->next;
		len++;
	}
	return (len);
}
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buff = *h, *new;
	unsigned int len, i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	len = get_len(&buff);
	if (idx >= len)
		return (NULL);
	if (len == 0)
	{
		*h = new;
		return (*h);
	}
	while (i != idx)
	{
		buff = buff->next;
	}
	new->prev = buff->prev;
	new->next = buff;
	return (new);
}
