#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: noting
 */
void rev_string(char *s)
{
	int len;
	int i, j;

	len = _strlen(s) - 1;
	char tmp[len];

	for (i = len, j = 0; i >= 0, j <= len; i--, j++)
		tmp[j] = s[i];
	s = &tmp;
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
