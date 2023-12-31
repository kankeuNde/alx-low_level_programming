#ifndef _lists_h_
#define _lists_h_
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct list_t - structure to store linked list
 * @str: First member
 * @len: Second member
 * @next: pointer to the next elt
 *
 * Description: used for storing complexe data
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
int _str_len(char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
