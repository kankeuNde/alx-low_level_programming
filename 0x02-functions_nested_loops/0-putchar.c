#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(msg[i]);
	}
	return (0);
}

/**
 * _putchar - print an array of char
 *
 * Return: void 
 */
void _putchar(char msg[])
{
	int i;

	i = 0;
	while(msg[i] != '\0')
	{
		putchar(msg[i]);
		i++;
	}
	putchar('\n');
}
