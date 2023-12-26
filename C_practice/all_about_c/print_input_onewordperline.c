#include <stdio.h>

/**
 *main - prints inputs one word per line
 *
 *Return: Always 0(success)
 */

int main(void)
{
	int c;


	while ((c = getchar()) != EOF)
	{
		if (c != '\n' && c != ' ')
		{
			printf("%c", c);
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
