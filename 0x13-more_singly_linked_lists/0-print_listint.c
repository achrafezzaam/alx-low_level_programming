#include "lists.h"
/**
 * print_listint - Title
 * @h: List
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ans;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ans = h;
	while (ans)
	{
		count++;
		printf("%d\n", ans->n);
		ans = ans->next;
	}

	return (count);
}
