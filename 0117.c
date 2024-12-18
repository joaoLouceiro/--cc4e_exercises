// Exercise 1-17. Write a function reverse(s) which reverses the character string s.
// Use it to write a program which reverses its input a line at a time.

#include <stdio.h>
#define MAX_LEN 100

void reverse(char line[], char rev[], int len);
int get_line(char line[]);

int main()
{
    int len = 0;
    char line[MAX_LEN];
    char rev[MAX_LEN];

    int i;
    reverse(line, rev, i);
    while((len = get_line(line)) > 0)
    {
        reverse(line, rev, len);
        printf("%s\n", rev);
    }
    return 0;
}

int get_line(char line[])
{
    int i, c;
    for(i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

void reverse(char line[], char rev[], int len)
{
    for(int i = len - 1; i >= 0; i--)
    {
        rev[len - i] = line[i];
    }
    rev[len + 1] = '\0';
}
