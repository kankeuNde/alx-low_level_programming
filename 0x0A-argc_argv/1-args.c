#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arghument count
 * @argv: argument vector
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
