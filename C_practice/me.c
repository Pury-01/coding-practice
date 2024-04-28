#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join_sentence(char *sentence_1, char *sentence_2)
{ 
 char *result= malloc(strlen(sentence_1) + strlen(sentence_2) + 1);
strcpy(result, sentence_1);
strcat(result, sentence_2);

return (result);
}

int main(void)
{
    char *sen1 = "Today was a fun day.";
    char *sen2 = " we are happy!";
    char *joined_sen = join_sentence(sen1, sen2);

    printf("%s\n", joined_sen);
    free(joined_sen);

    return (0);
}
