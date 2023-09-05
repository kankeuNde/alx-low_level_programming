#include "main.h"
#include <stdio.h>
int _strlen(char *s);

/**
 * str_concat - concatenate two strings s1 and s2
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer to the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i, j;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			str[i] = s1[i];
	}
	if (s2 != NULL)
	{
		j = 0;
		for (i = len1; (i < len - 1) && (j < len2); i++)
		{
			str[i] = s2[j];
			j++;
		}
	}
	str[len - 1] = '\0';
	return (str);
}

/**
 * _strlen - calculate the size of a string
 *
 * @s: input string
 *
 * Return: integer size of s
 */
int _strlen(char *s)
{
	int i, len;

	if (s == NULL)
		return (0);
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
