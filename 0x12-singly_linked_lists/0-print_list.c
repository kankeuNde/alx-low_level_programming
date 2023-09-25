#include "lists.h"

/**
 * print_list - print a linked list
 * @h: head of the linked list
 *
 * Return: integer, number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n;
	char *str;
	int len;

	n = 0;
	while (h != NULL)
	{
		n++;
		str = h->str;
		len = h->len;
		if (str == NULL)
			str = "(nil)";
		printf("[%d] %s\n", len, str);
		h = h->next;
	}
	return (n);
}
