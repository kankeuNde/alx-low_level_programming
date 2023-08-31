#include "main.h"

/**
 * factorial - compute the factorial of a number
 * @n: input n number
 *
 * Return: integer, the factorial of n
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
