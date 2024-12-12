// Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>
int main()
{
    int c = 0, n = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            n++;
        else
            n = 0;

        if(n <= 1)
            putchar(c);
    }
    return 0;
}
