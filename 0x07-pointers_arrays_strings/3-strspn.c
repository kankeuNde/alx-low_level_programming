#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: input string
 * @accept: input bytes to search from s
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;
	char *string1;
	char *string2;

	n = 0;
	string1 = s;
	string2 = accept;

	while (*string1)
	{
		for (i = 0; string2[i]; i++)
		{
			if (string2[i] == *string1)
			{
				n++;
				break;
			}
			else if ((string2[i + 1]) == '\0')
				return (n);
		}
		string1++;
	}
	return (n);
}
