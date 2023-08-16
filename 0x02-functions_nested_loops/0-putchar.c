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
