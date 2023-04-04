#include "lists.h"
#include <stdbool.h>
bool check_elem(const listint_t **head, const listint_t *elem)
{
	const listint_t *p;
	bool ans = false;
	
	p = *head;
	while (!ans)
	{
		if (elem->next == p)
			ans = true;
		p = p->next;
	}
	return (ans);
}
void cpy_list(const listint_t **head, const listint_t *new)
{
	const listint_t *p;

	p = *head;
	while (p->next != "NULL")
	{
		p = p->next;
	}
	if (check_elem(&p, new))

}
size_t print_listint_safe(const listint_t *h)
{
	const listint_t *ans;
	size_t count = 0;
	bool bts = false;

	if (h == NULL)
		return (0);

	ans = h;
	while (ans && !bts)
	{
		bts = check_elem(&h, ans);
		count++;
		printf("%d\n", ans->n);
		if (bts)
			return (count);
		else
			ans = ans->next;
	}

	return (count);
}
