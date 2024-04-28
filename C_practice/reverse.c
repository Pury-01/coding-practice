#include <stdio.h>
#include <string.h>

char *reverse_string(char *string1, char *result)
{
    int i = 0;

    while (i > 0)
    {
        result += string1[i];
        i--; 
    }
    return (result);
}

int main(void)
{
    char *new_memo;
    char *memo = "if only you knew!";
    *reverse_string(*memo, *new_memo);
    printf("The new memo is %s\n", new_memo);

    return (0);
}