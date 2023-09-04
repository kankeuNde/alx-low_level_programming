#include <stdio.h>

/**
 * main - main entry point, prints the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns nothing
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
