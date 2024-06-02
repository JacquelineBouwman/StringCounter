#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void stringCounter(char* inputString)
{
    int counter = 0;
    int length = strlen(&inputString[0]);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(inputString[i]))
        {
            counter++;
        }
    }
    printf("Total number of characters in this sentence are: %i", counter);
}

int main(void)
{
    char inputString[100];
    printf("Enter a sentence: \n");
    fflush(stdout);
    fgets(inputString, sizeof(inputString), stdin);

    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }
    
    stringCounter(inputString);
}