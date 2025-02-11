// Exercise 1-8. Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible.

#include <stdio.h>
int main(void)
{

    int c = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            putchar('-');
            putchar('\b');
            putchar('>');
        }
        else if(c == '\b')
        {
            putchar('-');
            putchar('\b');
            putchar('<');
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
