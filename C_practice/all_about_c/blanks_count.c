#include <stdio.h>

/**
 *main - counts blanks in an input
 *
 *Return: Always 0(success)
 */

int main(void)
{
	int c, bl, nl, tb;

	bl = nl = tb = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			bl++;
			printf("Space count: %d\n", bl);
		}
		else if (c == '\n')
		{
			nl++;
			printf("Newline count: %d\n", nl);
		}
		else if (c == '\t')
		{
			tb++;
			printf("Newtab count: %d\n", tb);
		}
		else
			printf("%c\n", c);
	}
	return (0);
}

