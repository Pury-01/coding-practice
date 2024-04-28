#include <stdio.h>

/**
 *main - prints all arguments without using ac 
 *
 *Return: Always 0(sucessful)
 */

int main(int argc, char **argv)
{
	int counter = 1;
	(void)argc;

	for (counter = 1; argv[counter] != NULL;  counter++)
	{
		printf("The argument %d:is:%s\n",counter, argv[counter]);
	}
	return (0);
}
