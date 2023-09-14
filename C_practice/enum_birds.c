#include <stdio.h>

enum birds {SPARROW, PEACKOCK, PARROT};
enum animals {TIGER = 8, LION, RABBIT, ZEBRA};

int main()
{
	enum birds m = TIGER;

	int k;

	k=m;

	printf("%d\n", k);

	return (0);
}
