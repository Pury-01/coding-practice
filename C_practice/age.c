#include <stdio.h>

/**
 *main - prints age of user
 *Return: 0 if success, 1 if invalid output
 */

int main(void)
{
	int age = 1;

	printf("Enter your age(in years)\n");
	/*user input goes here*/
	scanf("%d\n", &age);
	if (scanf("%d\n", &age) != 1 || age < 1 || age > 120)
	{
	printf("Invalid input, please enter a valid age\n");
	return (1);
	}
	printf("Your age is %d\n", age);

	return (0);
}
