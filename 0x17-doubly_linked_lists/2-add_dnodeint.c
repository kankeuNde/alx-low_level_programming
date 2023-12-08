#include "lists.h"
/**
 * add_dnodeint - add a node in a doubly linked list
 * @head: pointer to the head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
