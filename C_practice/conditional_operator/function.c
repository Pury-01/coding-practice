#include <stdio.h>

/**
 *max - function returning max value
 *
 *@num1: first number
 *
 *@num2: second number
 *
 *Return: max value between the two
 */

int max(int num1, int num2);

/**
 *main - prints max number between two numbers
 *Return: Always 0(successful)
 */

int main(void)
{
	/* local variables definition */
	int a = 100;
	int b = 200;
	int ret;

	/* calling a function to get max value */
	ret = max(a, b);

	printf("Max value is: %d\n", ret);

	return (0);
}
/*max - function returning the max between two numbers */
int max(int num1, int num2)
{
	/* local variable declaration */
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return (result);
}
