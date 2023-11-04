#include <stdio.h>

/**
 *main - prints the 15 times table
 *
 *Return: Always 0(successful)
 */

int main(void)
{
	int range = 15;
	int i = 0, j = 0;
	int product;

	for (i = 0; i <= 15; i++)
	{
		for (j = 0; j <= 15; j++)
		{
			product = i * j;

			if (product < 10)
			{
				printf("  ");
			}
			else if (product < 100)
			{
				putchar(' ');
			}
			printf("%d", product);

			if (j < range)
			{
				printf(", ");
			}
			else
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
