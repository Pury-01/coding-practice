#include <stdio.h>

/**
 *main - program that explains use of continue statement
 *
 *Return: Always 0(successful)
 *
 */

int main(void)
{
	int i = 0;

	/* loop from 1 to 10 */
	for (i = 0; i < 10; i++)
	{
		/**
		 *if i is equal to 6,
		 *continue to next iteration
		 *without printing
		 */
		if (i == 6)
			continue;
		else
			/*otherwise print the value if i */
			printf("%d ", i);
	}
	return (0);
}

