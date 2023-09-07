#include "main.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: input string
 * @s2: input string
 * @n: input n number of characters to copy
 *
 * Return: returns the pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2, len;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	i = 0;
	len = len1 + n + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; (s1[i] != '\0') && (i < len1); i++)
			str[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; (s2[j] != '\0' && j < n && j < len2); j++)
			str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
