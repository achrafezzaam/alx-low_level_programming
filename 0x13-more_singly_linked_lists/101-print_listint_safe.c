#include "lists.h"
#include <stdio.h>
/**
 * loop_len - title
 * @head: first
 *
 * Return: count
 */
size_t loop_len(const listint_t *head)
{
	const listint_t *p1, *p2;
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
 * print_listint_safe - title
 * @head: first
 *
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	count = loop_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
