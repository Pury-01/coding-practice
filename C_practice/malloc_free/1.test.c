#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
char name[100];
char *description;

strcpy(name, "Purity Okumu");

/*allocate memory dynamically*/
description = malloc(200 * sizeof(char));

if (description == NULL)
{
fprintf(stderr, "Error - unable to allocate required memory\n");}
else {
strcpy(description, "Purity Okumu a DPS student in class 10th");
}
printf("Name = %s\n", name);
printf("description: %s\n", description);
}
