#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void stringCounter(char *inputString)
{
    int counter = 0;
    int length = strlen(inputString);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(inputString[i]))
        {
            counter++;
        }
    }
    printf("Total number of characters in this sentence are: %i", counter);
}

int main()
{
    char * inputString = NULL;
    size_t len = 0;

    printf("Enter a sentence: \n");
    fflush(stdout);
    
    ssize_t characters = getline(&inputString, &len, stdin);
    if (characters == -1)
    {
        perror("getline");
        exit(EXIT_FAILURE);
    }

    if (inputString[characters - 1] == '\n'){
        inputString[characters - 1] = '\0';
    }
    
    stringCounter(inputString);

    return 0;
}