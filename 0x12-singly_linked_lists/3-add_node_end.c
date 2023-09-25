#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 * @head: first element of the list
 * @str: value of the node to add
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp_str;
	int tmp_len;
	list_t *tmp_node;
	list_t *last;

	last = *head;
	tmp_str = strdup(str);
	tmp_len = _str_len(tmp_str);
	tmp_node = malloc(sizeof(list_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->str = tmp_str;
	tmp_node->len = tmp_len;
	tmp_node->next = NULL;
	if (last == NULL)
	{
		last = tmp_node;
		return (tmp_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = tmp_node;
	return (tmp_node);
}
