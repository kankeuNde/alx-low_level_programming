#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: value of the n new node
 *
 * Return: returns listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
