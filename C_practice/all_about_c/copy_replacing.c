#include <stdio.h>

/**
 *main - copies input to output while replacing all blanks
 *with a single bank
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int c, blank;

	c = getchar();
	blank  = 0;

	while (c != EOF)
	{
		if (c == ' ')
		{
			if (!blank)
			{
				putchar(c);
			}
			blank = 1;
		}
		else
		{
			putchar(c);
			blank = 0;
		}
		c = getchar();
	}
	putchar('\n');
	return (0);
}
