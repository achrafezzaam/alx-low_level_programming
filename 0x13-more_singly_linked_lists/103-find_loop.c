#include "lists.h"
/**
 * find_listint_loop - title
 * @head: first
 *
 * Return: p1
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	p1 = head->next;
	p2 = (head->next)->next;

	while (p2)
	{
		if (p1 == p2)
		{
			p1 = head;

			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}

			return (p1);
		}

		p1 = p1->next;
		p2 = (p2->next)->next;
	}

	return (NULL);
}
