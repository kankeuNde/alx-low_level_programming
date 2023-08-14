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
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '9'; k++)
				for (l = k+1; l <= '9'; l++)
				{
					if (true)
					{
						putchar(i);
						putchar(i);
						putchar(' ');
						putchar(i);
						putchar(j);
						if (!(i == '8' && j == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
	putchar('\n');
	return (0);
}
