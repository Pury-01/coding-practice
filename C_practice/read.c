#include <stdio.h>

void main(void)
{
	FILE *fp;
	char buff[255];

	fp = fopen("/tmp/test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE *)fp);
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE *)fp);
	printf("3: %s\n", buff);
}
