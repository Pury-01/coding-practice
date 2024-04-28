#include <stdio.h>

int main(void)
{
    char memo[50];
    fgets(memo, sizeof(memo),stdin);
    printf("character = %s\n", memo);
}