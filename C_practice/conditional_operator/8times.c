#include <stdio.h>

/**
 *main - prints the 8 times table
 *Return - Always 0(successful)
 */

int main(void)
{
	int range = 8;
	int i = 1;
	int j = 1;
	int product;

	for (i = 1; i <= range; i++)
	{
		for (j = 1; j <= range; j++)
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
			{
				putchar('\n');
			}
		}
	}
	return (0);

}

