// Exercise 1-12. Write a program to print a histogram of the lengths of words in its input. It is easiest to draw the histogram horizontally; a vertical orientation is more challenging.

// 1. words are defined by any continuous string of characters between empty spaces
// 2. empty spaces are ' ', '\n' or '\t'
// 3. the wcount array will keep track of the ocurrences of wcount[ccount]
// 4. there are no 0 length words
#include <stdio.h>

#define YES 1
#define NO 1
#define MAX_WORD_LENGTH 15

int main(int argc, char* argv[])
{
    int c = 0;
    int ccount = 0;
    int wcount[MAX_WORD_LENGTH];

    printf("Press CTRL + D to exit the program\n");

    for(size_t i = 0; i < MAX_WORD_LENGTH; i++)
    {
        wcount[i] = 0;
    }
    int inword = NO;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(inword)
            {
                // There are no 0 length words, so we can disregard index 0
                wcount[ccount - 1]++;
            }
            inword = NO;
            ccount = 0;
        }
        else
        {
            inword = YES;
            ccount++;
        }
    }

    for(size_t i = 0; i < MAX_WORD_LENGTH; i++)
    {
        printf("%zu\t| ", i + 1);
        for(size_t j = 0; j < wcount[i]; j++)
        {
            printf("=");
        }
        printf("\n");
    }

    return 0;
}
