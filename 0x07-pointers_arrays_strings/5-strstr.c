#include "main.h"
int _strlen(char *s);

/**
 * _strstr - find a subsequence string in a string
 * @haystack: input string where the search will be done
 * @needle: input subsequent string to search in haystack
 *
 * Return: pointer to the subsequent string or NULL if it doesn't exist
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, hlen, nlen, len;

	hlen = _strlen(haystack);
	nlen = _strlen(needle);
	len = hlen - nlen;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < nlen; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (j == nlen)
			return (haystack + i);
	}
	if (i == hlen)
		return (NULL);
	return (haystack + i);
}

/**
 * _strlen - compute the lenght of the string s
 * @s: input string
 *
 * Return: integer representing the length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
