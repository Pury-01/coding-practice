#include <stdio.h>

#define MAX_LENGTH 500

int main(void)
{
    FILE *file;
    char l_poem[MAX_LENGTH];

    //open file 
    file = fopen("lovelove.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file to read content.\n");
        return (1);
    }
    //write file
    while(fgets(l_poem, MAX_LENGTH, file) != NULL)
    {
        printf("%s", l_poem);
    }
    putchar('\n');

    //close file
    fclose(file);

    return (0);
}