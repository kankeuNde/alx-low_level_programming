#include "variadic_functions.h"

/**
 * print_strings - print strings separated by the separator string
 * @separator: string to use as separator
 * @n: number of numbers to print
 * @...: variadic arguments
 * Return: void nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(ap, n); /* Initialize the argument list.*/

		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator != NULL)
				printf("%s", separator);
		}
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		va_end(ap);
	}
	printf("\n");
}
