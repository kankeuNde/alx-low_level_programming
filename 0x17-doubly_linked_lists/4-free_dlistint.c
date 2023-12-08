#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: void nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			cursor = head;
			head = head->next;
			free(cursor);
		}
		free(head);
	}
}
