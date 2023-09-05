#include "main.h"

/**
 * create_array - create an array of size size prefilled with char c
 *
 * @size: input size of the array
 * @c: initial values of array
 *
 * Return: pointer to the array, or NULL if failure
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
