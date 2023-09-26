#include "lists.h"

/**
 * add_nodeint_end - add a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: value of the n new node
 *
 * Return: returns listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last;

	node = malloc(sizeof(struct listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = node;
	return (node);
}
