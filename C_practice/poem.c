#include <stdio.h>

#define SIZE 150

int main(void)
{
    FILE *source_file, *dest_file;
    char line[SIZE];

    //open files
    source_file = fopen("lovepart2.txt","r");
    if (source_file == NULL)
    {
        perror("Error opening file for reading");
        return (1);
    }

    dest_file = fopen("partlove.txt", "w");
    if (dest_file  == NULL)
    {
        perror("Error  opening file for writing");
        return (1);
    }
    //reading file and copying
    while (fgets(line, SIZE, source_file) != NULL)
    {
        fputs(line,  dest_file);
        printf("%s", line);
    }
    putchar('\n');
    
    //close files
    fclose(source_file);
    fclose(dest_file);

    return (0);
}