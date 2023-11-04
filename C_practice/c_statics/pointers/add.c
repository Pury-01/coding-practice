#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = 20;
	int num2 = 10;
	int result = 0;
	int *res = &result;
              
	result = num1 + num2;

	printf("the sum is %d\n", *res);

	return (0);
}






