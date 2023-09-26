#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t
 * @head: head of the list
 * @index: index of the node
 *
 * Return: node listint_t or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head->next != NULL; i++)
	{
		head = head->next;
	}
	if (i < index)
		return (NULL);
	return (head);
}
