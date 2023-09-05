#include "main.h"

/**
 * alloc_grid - allocate memory for a two dimensional array
 *
 * @width: input width dimension
 * @height: input height dimension
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		array[i] = (int *)malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	return (array);
}