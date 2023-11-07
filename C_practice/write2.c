#include <stdio.h>

void main(void)
{
	FILE *fp;

	fp =fopen("/tmp/first.txt", "a");
	fputs("\nHow is this even possible...\n", fp);
	fclose(fp);
}
