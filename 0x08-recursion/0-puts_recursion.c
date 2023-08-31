#include "main.h"

/**
 * _puts_recursion - print a string recusrsively using putchar
 *
 * @s: string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
