#include "lists.h"
/**
 * add_nodeint - Title
 * @head: First element of list
 * @n: n value for new element
 *
 * Return: return pointer to first element of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
