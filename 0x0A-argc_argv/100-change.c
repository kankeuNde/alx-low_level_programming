#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 for success and 1 for failure
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
