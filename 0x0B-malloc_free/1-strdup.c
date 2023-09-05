#include "main.h"

/**
 * _strdup - duplicate an inputed string str
 * @str: inputed string to duplicate
 *
 * Return: pointer to the new string or NULL
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *strcpy;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	strcpy = malloc(len * sizeof(char));
	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		strcpy[i] = str[i];
	return (strcpy);
}
