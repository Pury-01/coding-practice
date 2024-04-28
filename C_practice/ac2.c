#include <stdio.h>

/**
 *main - prints all the arguments without using ac
 *
 *Return: Always 0(successful)
 */

int main(int argc, char *argv[])
{
	int count = 1;
	(void)argc;

	for (count = 1; argv[count] != NULL; count++)
	{
		printf("Argument %d is: %s\n", count, argv[count]);
	}
	return (0);
}
