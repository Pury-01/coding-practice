#include <stdio.h>
#include <stdlib.h>

/**
 *add - gives sum of two numbers
 *@a: first number
 *@b: second number
 */
void add(int a, int b)
{
	printf("sum:%d\n", a + b);
}

/**
 *div - performs division of two numbers
 *@a: first number
 *@b: second number
 */
void divide(int a, int b)
{
	printf("division:%d\n", a / b);
}

/**
 *mul - multiplies two numbers
 *@a: first number
 *
 *@b: second number
 */
void mul(int a, int b)
{
	printf("multiplcation:%d\n", a * b);
}

/**
 *operator - function to callback functions
 *@op: pointer to the address callback function
 */

void operator(void (*op)(int,int))
{
	int a, b;

	printf("Enter two numbers:");
	scanf("%d %d\n", &a, &b);

	op(a, b);
}
int main(void)
{
	operator(divide);
	operator(mul);
	operator(add);
	
	return (0);
}
