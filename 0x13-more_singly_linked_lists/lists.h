#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_t - list of int
 * @n: number of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
