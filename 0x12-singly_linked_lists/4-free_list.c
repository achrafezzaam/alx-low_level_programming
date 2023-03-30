#include "lists.h"
/**
 * free_list- Free the space taken by a linked list
 * @head: The first element of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
