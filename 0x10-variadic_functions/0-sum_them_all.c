#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of variadic arguments
 * @...: numbers to add
 *
 * Return: int sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_of_numbers;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(list_of_numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_of_numbers, int);
	}
	va_end(list_of_numbers);
	return (sum);
}
