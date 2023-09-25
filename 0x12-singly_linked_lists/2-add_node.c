#include "lists.h"

/**
 * add_node - add a node at the beginning of the list
 * @head: head of the list
 * @str: str value of the new node to add
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_temp;
	int len_temp;
	list_t *temp;

	str_temp = strdup(str);
	len_temp = _str_len(str_temp);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = str_temp;
	temp->len = len_temp;
	temp->next = *head;
	*head = temp;
	return (*head);
}

/**
 * _str_len - compute the length of a string
 * @str: input string
 *
 * Return: integer representing the length of the inputed string
 */
int _str_len(char *str)
{
	int n;

	n = 0;
	while (str != NULL && *str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
