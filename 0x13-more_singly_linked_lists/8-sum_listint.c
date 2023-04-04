#include "lists.h"
/**
 * sum_listint - Title
 * @head: First
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum;

	if (head == NULL)
		return 0;

	p = head;
	sum = p->n;
	while (p != NULL)
	{
		p = p->next;
		if (p != NULL)
			sum += p->n;
	}
	return (sum);
}
