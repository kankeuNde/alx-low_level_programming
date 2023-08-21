#include "main.h"

/**
 * _puts - print a string on the stdout
 * @str: string to print
 * Return: noting
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
