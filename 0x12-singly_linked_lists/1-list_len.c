#include "lists.h"

/**
 * list_len - compute the number of elements in a linked list
 * @h: head of the list
 *
 * Return: integer, representing the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
