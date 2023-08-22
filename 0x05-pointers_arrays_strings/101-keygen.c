#include "main.h"

/**
 * main - entry point generates a random pwd
 *
 * Return: 0 always
 */
int main(void)
{
	char c;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		c = rand() % 128;
		c += c;
		putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
