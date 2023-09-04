#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 1 if error and 0 if success
 */
int main(int argc, char *argv[])
{
	int i, res, j;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
