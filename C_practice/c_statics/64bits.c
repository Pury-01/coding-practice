#include <stdio.h>

union Sti
{
	int nu;
	char m;

};
int main()
{
	union Sti s;

	printf("%ld\n", sizeof(s));
	return (0);
}
