#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at specific index
 * @head: pointer to the head of the list
 * @index: position of the element to retrieve
 *
 * Return: dlistint_t element at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int position;
	dlistint_t *temp;

	position = index;
	temp = head;
	while (position > 0 && temp->next != NULL)
	{
		temp = temp->next;
		position--;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
