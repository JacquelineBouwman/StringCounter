#include <stdio.h>
#include <string.h>
#include <math.h>
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
    char inputString[100];
    printf("Enter a sentence: \n");
    fflush(stdout);
    scanf("%[^\n]%*c", inputString);

    stringCounter(inputString);

}