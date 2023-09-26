#include "lists.h"

/**
 * pop_listint - pop the first element of the list
 * @head: head of the list
 *
 * Return: integer, n of the head popped
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *rev;

	if (*head == NULL)
		return (0);
	rev = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(rev);
	return (n);
}
