#include <stdio.h>

/**
 *main - counts characters
 *
 *Return: Always 0(success)
 */

int main(void)
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
	{
		++nc;
		printf("%ld\n", nc);
	}
	return (0);
}
