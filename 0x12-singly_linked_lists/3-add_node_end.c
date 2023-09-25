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

	tmp_node = malloc(sizeof(list_t));
	if (tmp_node == NULL)
	{
		free(tmp_node);
		return (NULL);
	}
	tmp_str = strdup(str);
	tmp_len = _str_len(tmp_str);

	tmp_node->str = tmp_str;
	tmp_node->len = tmp_len;
	tmp_node->next = NULL;
	if (*head == NULL)
	{
		*head = tmp_node;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp_node;
	return (*head);
}

/**
 * _str_len - compute the length of a string
 * @str: inputed string
 *
 * Return: integer size of the string
 */
int _str_len(char *str)
{
	int n, i;

	n = 0;
	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		n++;
		i++;
	}
	return (n);
}
