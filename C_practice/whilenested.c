#include <stdio.h>

void main(void)
{
    int i  = 0, j = 1;

    while(i < 3)
    {
        while(j <= 3)
        {
          //  printf("%d\n", j++);
          j++;
        }
      //  printf("%d\n", i++);
      printf("%d %d", ++i, ++j);
    }
}