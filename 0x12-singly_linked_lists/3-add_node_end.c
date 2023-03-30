#include "lists.h"
#include <string.h>
/**
 * get_last - Gets the last element of a linked list
 * @head: pointer to the first element of the linked list
 *
 * Description: navigate throw the linked list
 * to get the last element.
 * Return: Return the last element of the linked list
 */
list_t *get_last(list_t **head)
{
	list_t *last;

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}
/**
 * add_node_end - Adds a new element to the end of a linked list
 * @head: The first element of the linked list
 * @str: The str value of the newly created node
 *
 * Description: Create a new node then assign it's value
 * to the next value of the last linked list's element
 * Return: Return a pointer to the first element of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = get_last(head);
		last->next = new;
	}

	return (*head);
}
