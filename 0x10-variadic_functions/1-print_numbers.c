#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by the separator string
 * @separator: string to use as separator
 * @n: number of numbers to print
 * @...: variadic arguments
 * Return: void nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n); /* Initialize the argument list.*/

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
