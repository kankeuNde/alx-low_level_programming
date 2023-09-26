#include "lists.h"

/**
 * listint_len - compute the number of elements in a linked list
 * @h: head of the list
 *
 * Return: integer, the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
