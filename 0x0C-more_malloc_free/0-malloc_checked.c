#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the pointer
 *
 * Return: returns a pointer to the new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
