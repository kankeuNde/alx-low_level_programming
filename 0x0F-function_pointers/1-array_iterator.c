#include "function_pointers.h"
/**
 * array_iterator - apply a function on an array of int
 *
 * @array: input array of int
 * @size: size of the input array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
