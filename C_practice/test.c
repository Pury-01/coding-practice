#include <stdio.h>

void main(void)
{
	FILE *fp;
	fp = fopen("/tmp/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
}
