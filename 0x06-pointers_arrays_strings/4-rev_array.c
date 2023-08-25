#include "main.h"

/**
 * reverse_array - print a given array in the reverse order
 * @a: input string
 * @n: length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (j > i)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}
