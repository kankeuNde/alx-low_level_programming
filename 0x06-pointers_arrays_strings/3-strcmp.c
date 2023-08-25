#include "main.h"

int _strlen(char *s1);
int _max(int n1, int n2);

/**
 * _strcmp - compare two strings
 * @s1: input string sequence 1
 * @s2: input string sequence 2
 *
 * Return: 0 if equals, and 's1' - 's2' if not
 */
int _strcmp(char *s1, char *s2)
{
	int lens1 = _strlen(s1);
	int lens2 = _strlen(s2);
	int max = _max(lens1, lens2);
	int i;

	for (i = 0; i < max; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _max - compute the max of two given numbers
 *
 * @n1: input integer
 * @n2: input integer
 * Return: return n1 if it's greater than n2, otherwise n2
 */
int _max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

/**
 * _strlen - compute the length of a given string
 * @s: input string
 *
 * Return: return the length of the inputed string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
