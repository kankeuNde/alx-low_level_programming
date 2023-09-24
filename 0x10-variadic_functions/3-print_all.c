#include "variadic_functions.h"
int _get_len(const char * const format);

/**
 * print_all - print all argument based on the format
 * @format: format to use for the argument
 * @...: varargs
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, len;

	len = _get_len(format);
	va_start(ap, format);

	i = 0;
	while (format[i] != '\0' && i != len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(ap, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case 's':
				printf("%s, ", va_arg(ap, char *));
				break;

		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * _get_len - compute the size of a string
 * @format: input string
 *
 * Return: integer, the size of the string
 */
int _get_len(const char * const format)
{
	int i;

	i = 0;
	while (format[i] != '\0')
		i++;
	return (i);
}
