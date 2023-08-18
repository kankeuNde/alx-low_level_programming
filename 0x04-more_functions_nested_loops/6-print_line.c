#include "main.h"

/**
 * print_line - prints a straight line in the console
 * @n: integer input
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
			_putchar('_');
	}
	_putchar('\n');
}
