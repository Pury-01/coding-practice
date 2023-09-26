#include <stdio.h>

/**
 *main - prints the 9 multiple table
 *
 *Return: Always 0(successful)
 */

int main(void)
{
	int range = 9;
	int i = 0;
	int j = 0;
	int product;

	for (i = 0; i <= range; i++)
	{
		for (j = 0; j <= range; j++)
		{
			product = i * j;

			if (product < 10)
			{
				putchar(' ');
			}
			printf("%d", product);
			if (j < range)
			{
				printf(", ");
			}
			else
			{printf("\n");
			}
		}
	}
	return (0);
}

