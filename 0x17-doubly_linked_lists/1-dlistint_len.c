#include "lists.h"

/**
 * dlistint_len - count the number of node in  a double linked list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
