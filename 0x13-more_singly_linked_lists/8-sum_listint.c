#include "lists.h"

/**
 * sum_listint - compute the sum of data (n) in a linked list
 * @head: head of the list
 *
 * Return: integer, the sum of data (n) nodes
 */
int sum_listint(listint_t *head)
{
	int n;

	if (head == NULL)
		return (0);
	n = 0;
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
