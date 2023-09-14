#include <stdio.h>

/**
 *main - program that prints your name
 *Return: Always 0(success)
 */

int main(void)
{
	char name[25];

	printf("Enter your name\n");
	/*user input goes here*/
	scanf("%s", name);
	printf("your name is %s\n", name);

	return (0);
}

