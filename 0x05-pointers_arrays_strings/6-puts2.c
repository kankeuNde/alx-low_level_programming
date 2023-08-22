#include "main.h"

/**
 * puts2 - print a string on the stdout
 * @str: string to print
 * Return: noting
 */
void puts2(char *str)
{
	while (*str)
		_putchar(*(str + 2));
	_putchar('\n');
}
