#include "lists.h"

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

	while (pos > 0 && temp != NULL)
	{
		temp = temp->next;
		pos--;
	}
	if (temp == NULL)
		return (NULL);
	if(temp->next == NULL)
		*h = add_dnodeint_end(h, n);
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
