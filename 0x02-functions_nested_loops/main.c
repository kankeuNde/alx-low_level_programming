#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r);
	return (0);
}
