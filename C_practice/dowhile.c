#include <stdio.h>

void main(void)
{
    int i;
    do
    {
        printf("Enter a number ");
        scanf("%d", &i);
        printf("purity\n");
        
    } while (i <= 0);
    
    printf("nothing here\n");
}