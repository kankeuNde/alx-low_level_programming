#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: input min value
 * @max: input max value
 *
 * Return: pointer to the newly created array or NULL if error or min > max
 */
int *array_range(int min, int max)
{
	unsigned int len, i;
	int *arr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (len * sizeof(int)) && min <= max; i++)
		arr[i] = min++;
	return (arr);
}
