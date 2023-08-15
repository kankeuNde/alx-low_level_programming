#include "main.h"

/**
 * print_alphabet - print the alphabet a-z with new line at the end
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
