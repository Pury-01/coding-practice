#include <stdio.h>

void main(void)
{
    char ch = 'a';

    while(ch >= 97 && ch < 150)
    {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    printf("End of program\n");
}