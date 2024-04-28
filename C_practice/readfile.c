#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    FILE *file;
    char poem[MAX_LENGTH];

    // open file
    file = fopen("samplefile.txt", "r");
    if (file == NULL)
    {
        perror("Errror opening file for reading");
        return (1);
    }

    //read and print lines from the file
    printf("My heartfelt poem:\n");

    while(fgets(poem, MAX_LENGTH, file) != NULL)
    {
        printf("%s", poem);
    }
    putchar('\n');

    //close file
    fclose(file);

    return (0);
}