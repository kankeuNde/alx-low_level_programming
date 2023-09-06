#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: input argument count
 * @av: input argument vector
 *
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int len, i, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = ac + 1;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (i > 0)
			*str = '\n';
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
	}
	*str = '\0';
	return (str);
}
