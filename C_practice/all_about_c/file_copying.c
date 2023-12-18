#include <stdio.h>

/**
 *main - copies file using getchar and putchar functions
 *
 *Return: Always 0
 */

int main(void)
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return (0);
}
