#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success and 1 if not
 */
int main(int argc, char *argv[])
{
	int mult1, mult2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult1 = atoi(argv[1]);
	mult2 = atoi(argv[2]);
	res = mult1 * mult2;
	printf("%d\n", res);
	return (0);
}
