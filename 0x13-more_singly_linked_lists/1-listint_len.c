#include "lists.h"
/**
 * listint_len - Title
 * @h: list
 *
 * Return: Length of list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ans;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ans = h;
	while (ans)
	{
		count++;
		ans = ans->next;
	}

	return (count);
}
