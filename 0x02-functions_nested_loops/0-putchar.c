#include "main.h"

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
	int len = sizeof(msg) / sizeof(msg[0]);
	int i;

	for (i = 0; i < len; i++)
		putchar(msg[i]);
	putchar('\n');
}
