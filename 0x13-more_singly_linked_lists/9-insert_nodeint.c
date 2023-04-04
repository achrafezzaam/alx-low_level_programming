#include "lists.h"
/**
 * get_size - Title
 * @head: first
 *
 * Return: count
 */
unsigned int get_size(listint_t **head)
{
	listint_t *p;
	unsigned int count = 0;

	p = *head;
	while (p)
	{
		count++;
		p = p->next;
	}
	return (count);
}
/**
 * get_nth - Title
 * @head: first
 * @n: second
 *
 * Return: p
 */
listint_t *get_nth(listint_t **head, unsigned int n)
{
	listint_t *p;
	unsigned int count = 0;

	p = *head;
	while (count != (n - 1))
	{
		p = p->next;
		count++;
	}
	return (p);
}
/**
 * insert_nodeint_at_index - Title
 * @head: first
 * @idx: second
 * @n: third
 *
 * Return: p
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *nth;
	unsigned int size = 0;

	size = get_size(head);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;

	if (idx == 0)
	{
		p->next = *head;
		*head = p;
	}
	else if (idx <= size)
	{
		nth = get_nth(head, idx);
		if (idx == size)
			p->next = NULL;
		else
			p->next = nth->next;
		nth->next = p;
	}
	else
	{
		free(p);
		return (NULL);
	}
	return (p);
}
