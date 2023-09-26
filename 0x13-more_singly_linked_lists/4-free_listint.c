#include "lists.h"

/**
 * free_listint - free listint_t list
 * @head: head of the list
 *
 * Return: void, nothing
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	if (head == NULL)
		return;
	last = head;
	while (head->next != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);
}
