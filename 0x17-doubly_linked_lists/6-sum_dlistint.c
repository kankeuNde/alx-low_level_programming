#include "lists.h"

/**
 * sum_dlistint - sum every data in a dlistint
 * @head: pointer to the head of list
 *
 * Return: integer, sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
