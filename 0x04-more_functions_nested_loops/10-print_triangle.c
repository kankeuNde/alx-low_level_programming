#include "main.h"

/**
 * print_triangle - print a triangle of height size
 * @size: input integer
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j >= 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
