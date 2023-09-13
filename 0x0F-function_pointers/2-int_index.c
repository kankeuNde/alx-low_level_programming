#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: input array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: -1 if no match or n if match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
