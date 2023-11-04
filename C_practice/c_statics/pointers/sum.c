#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=0, num2=0, sum=0;
    int *ptr1, *ptr2;
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    
    if (ptr1 == NULL && ptr2 == NULL)
        {
            printf("No input. Please enter a valid number\n");
        }
    else
        {
            sum = *ptr1 + *ptr2;
            printf("Sum = %d\n", sum);
        }
    return (0);
}















