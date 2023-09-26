#include <stdio.h>

/**
 *print_table - prints the multiplication table
 */

void print_table(int range, int num)
{
	int mul; /*declaration of variable that stores the product*/
	int i;
	/*for loop to calculate the multiplication table */
	for (i = 0; i <= range; i++)
	{
		mul = num * i;

		printf(" %d * %d = %d", num, i, mul);
		printf("\n");
	}
}

/**
 *main - prints the 12times table
 *
 *Return: Always 0(successful)
 */

int main(void)
{
	int range = 12;
	int num = 12; /*number to calculate the table */

	print_table(range, num);

	return (0);
}
