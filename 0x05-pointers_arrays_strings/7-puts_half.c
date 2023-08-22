#include "main.h"

/**
 * puts_half - print the seconf half part of a string
 * @str: input string
 * Return: noting
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}

/**
 * _strlen - compute the length of a string
 * @s: string to compute
 * Return: returns the lenght of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
