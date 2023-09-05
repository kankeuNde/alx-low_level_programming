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
	len++;
	strcpy = malloc(len * sizeof(char));
	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < len - 1; i++)
		strcpy[i] = str[i];
	strcpy[len - 1] = '\0';
	return (strcpy);
}
