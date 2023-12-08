#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
