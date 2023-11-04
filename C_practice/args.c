#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	
	printf("argc = %d\n", argc);
	printf("let's see what is in agrv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
