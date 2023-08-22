#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: noting
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = _strlen(s) - 1;
	i = 0;
	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
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

/**
 * swap_char - swap two chars
 * @a: first char
 * @b: second char
 * Return: nothing
 */
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
