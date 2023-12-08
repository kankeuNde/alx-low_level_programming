#include "lists.h"
/**
 * add_dnodeint_end - add a node in a doubly linked list at the end
 * @head: pointer to the head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cursor;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	cursor = *head;
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = new;
	new->prev = cursor;
	return (*head);
}
