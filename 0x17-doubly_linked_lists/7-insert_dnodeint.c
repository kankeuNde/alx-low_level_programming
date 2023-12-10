#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a position idx
 * @h: pointer head to the list
 * @idx: position where to insert
 * @n: value of the node
 *
 * Return: dlistint_t head of the modified list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;
	dlistint_t *temp2;
	int pos;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *h;
	pos = idx;
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	while (pos > 1 && temp != NULL)
	{
		temp = temp->next;
		pos--;
	}
	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
		*h = add_dnodeint_end(h, n);
	else if (temp->prev == NULL)
		*h = add_dnodeint(h, n);
	else
	{
		temp2 = temp->next;
		temp->next = newNode;
		temp2->prev = newNode;
		newNode->prev = temp;
		newNode->next = temp2;
	}
	return (newNode);
}
