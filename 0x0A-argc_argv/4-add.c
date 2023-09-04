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
	int i, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			res += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
