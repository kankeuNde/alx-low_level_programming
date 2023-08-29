#include "main.h"

/**
 * _strpbrk - locate the first occurence of accept string
 * @s: input string fom where the search is carried out
 * @accept: input string to locate in s
 *
 * Return: return a pointer to the first occurrence of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
