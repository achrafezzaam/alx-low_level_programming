#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a node at the beginning of a linked list
 * @head: Pointer to the first element of the linked list
 * @str: The str value of the new node
 *
 * Description: Create a new element and
 * adds it to the start of the list_t linked list
 * Return: Return a pointer to the first element of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ans;

	ans = malloc(sizeof(list_t));
	if (ans == NULL)
		return (NULL);
	ans->len = strlen(str);
	ans->str = strdup(str);
	if (ans->str == NULL)
	{
		free(ans);
		return (NULL);
	}
	ans->next = *head;
	*head = ans;
	return (*head);
}
