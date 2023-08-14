#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
		for (j = i; j <= '9'; j++)
			for (k = j; k <= '9'; k++)
				for (l = k; l <= '9'; l++)
				{
					if (i != j && j != k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!(i == '9' && j == '8' && k == '9' && l == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
	putchar('\n');
	return (0);
}
