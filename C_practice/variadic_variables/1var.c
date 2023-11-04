#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	int i = 0;
	int result = 0;
	va_list args; /*declare a va_list to hold the variable arguments*/
	va_start(args, count);  /*initialize args with the variable argument*/

	/*loop through the variable arguments and add them to the result*/
	for (i = 0; i < count;  i++)
	{
		result += va_arg(args, int);
	}
	/*get the next argument of type int*/
	va_end(args); /*clean up the va_list*/
	return (result);
}


int main(void)
{
	int total = sum(5, 1, 2, 3, 4, 5);
	printf("Sum: %d\n", total);

	return  (0);
}
