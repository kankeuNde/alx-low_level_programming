#include "main.h"

/**
 * print_square - prints a square using the # signs
 * @size: n=m= size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int line, col;

	if (size > 0)
		for (line = 0; line < size; line++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');
			_putchar('\n');
		}
}
