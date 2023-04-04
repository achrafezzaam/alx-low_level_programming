#include "lists.h"
/**
 * get_size - title
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
 * get_nth - title
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
 * delete_nodeint_at_index - Title
 * @head: first
 * @index: second
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *temp;
	unsigned int size;

	if (*head == NULL)
		return (-1);
	p = *head;
	size = get_size(head);
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	else if (index < size)
	{
		p = get_nth(head, index);
		temp = p->next;
		p->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
