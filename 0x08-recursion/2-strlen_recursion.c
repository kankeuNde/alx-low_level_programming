#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: input string
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
