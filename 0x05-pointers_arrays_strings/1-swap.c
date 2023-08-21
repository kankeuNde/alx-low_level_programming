#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer parameter
 * @b: second integer parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
