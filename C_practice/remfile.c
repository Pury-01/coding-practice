#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    FILE *source_file, *dest_file;
    char line[MAX_LENGTH];

    //open source file
    source_file = fopen("lovepart1.txt", "r");
    if (source_file == NULL)
    {
        perror("Error opening file to read contents");
        return (1);
    }
    //open destination file
    dest_file = fopen("lovelove.txt", "w");
    if (dest_file == NULL)
    {
        perror("Error opening file to write");
        return (1);
    }
    //read file and copy contents to another file
    while(fgets(line, MAX_LENGTH, source_file) != NULL)
    {
        fputs(line, dest_file);
        printf("%s", line);
    }
    putchar('\n');

    //close files
    fclose(source_file);
    fclose(dest_file);

    return (0);
}