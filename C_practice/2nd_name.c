#include <stdio.h>

/**
 *main - program prints your name
 *Return: Always 0(success)
 */

int main(void)
{
	char name[25];

	printf("enter your name\n");
	/*user input will be taken here*/
	scanf("%s", name);
	printf("your name is %s\n", name);

	return (0);
}

