// Exercise 1-6. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
int main(void)
{
    int c = 0, n = 0;
    while((c = getchar()) != EOF)
    {
        putchar(c);
        if(c == ' ' || c == '\t' || c == '\n')
        {
            ++n;
            printf("%d", n);
        }
    }
    return 0;
}
