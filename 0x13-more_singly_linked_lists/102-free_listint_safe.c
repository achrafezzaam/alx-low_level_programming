#include "lists.h"
/**
 * loop_count - title
 * @head: first
 *
 * Return: count
 */
size_t loop_count(listint_t *head)
{
	listint_t *p1, *p2;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	p1 = head->next;
	p2 = (head->next)->next;

	while (p2)
	{
		if (p1 == p2)
		{
			p1 = head;
			while (p1 != p2)
			{
				count++;
				p1 = p1->next;
				p2 = p2->next;
			}

			p1 = p1->next;
			while (p1 != p2)
			{
				count++;
				p1 = p1->next;
			}

			return (count);
		}

		p1 = p1->next;
		p2 = (p2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - title
 * @h: first
 *
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count, i;

	count = loop_count(*h);

	if (count == 0)
	{
		for (; h != NULL && *h != NULL; count++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < count; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (count);
}
