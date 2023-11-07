#include <stdio.h>


void main(void)
{
	FILE *fp;

	fp = fopen("/tmp/first.txt", "w");
	fputs("hello, World!, we are worldwide",fp);
	fclose(fp);
}
