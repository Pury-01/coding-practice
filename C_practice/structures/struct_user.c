#include <stdio.h>

typedef int pury;

pury sum;

void add_val(int a, int b)
{
	sum = a + b;
}

pury main(void)
{
	pury a = 3;
	pury b = 5;
	
	printf("the sum of a and b is %d\n", sum);
	
	return (0);
}
