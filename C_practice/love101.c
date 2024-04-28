#include <stdio.h>

#define MAX_LENGTH 300

int main(void)
{
    FILE *file;
    char n_poem[MAX_LENGTH];

    //open file
    file = fopen("lovepart1.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file\n");
        return (1);
    }
//write the file
while(fgets(n_poem, MAX_LENGTH, file) != NULL)
{
    printf("%s", n_poem);
}
putchar('\n');

fclose(file);

return (0);
}