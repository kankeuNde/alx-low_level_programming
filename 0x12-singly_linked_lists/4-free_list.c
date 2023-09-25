#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the list
 *
 * Return: void, nothing
 */
void free_list(list_t *head)
{
	list_t *tail;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head != NULL)
	{
		tail = head;
		head = head->next;
		free(tail->str);
		free(tail);
	}
	free(head);
}
