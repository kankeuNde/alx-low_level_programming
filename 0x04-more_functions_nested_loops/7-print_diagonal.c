#include "main.h"

/**
 * print_diagonal - print a diagonal in the console
 * @n: input integer, number of \ characters
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('\\');
			if (i > 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
