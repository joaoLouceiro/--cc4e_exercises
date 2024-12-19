// Exercise 1-19. Write a program detab which replaces tabs in the input with the proper number of
// blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n positions.

// Hello world\tHello world
// 01234567012-----0123(...)
//
// 1. if (c != '\t') printchar(c)
// 2. if (tab) {
//  int numOfBlanks = TAB_STOP - index % TAB_STOP; -----> !!WRONG!!
//  for (i < numOfBlanks)
//      print(' ');
// }

#include <stdio.h>
#define TAB_STOP 8
#define MAX_LEN 100

int make_line(char arr[]);
void detab(char line[], char detabed[], int len);

int main(void)
{
    int c = 0;
    int index = 0;
    int len;
    char line[MAX_LEN];
    char detabed[MAX_LEN * 2];

    while ((len = make_line(line)) > 0) {
        detab(line, detabed, len);
        printf("%s\n", detabed);
    }
    return 0;
}

int make_line(char arr[])
{
    int c, i = 0;
    for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        arr[i] = c;
    }
    arr[i] = '\0';
    return i;
}

void detab(char line[], char detabed[], int len)
{
    int blanksOffset = 0;
    int dIndex = 0;
    size_t i = 0;
    for (i = 0; i < len; i++) {
        dIndex = i + blanksOffset;
        if (line[i] != '\t') {
            detabed[dIndex] = line[i];
        } else {
            int numOfBlanks = TAB_STOP - ((dIndex) - (TAB_STOP * ((dIndex) / TAB_STOP)));
            for (size_t j = 0; j < numOfBlanks; j++) {
                detabed[dIndex + j] = '-';
            }
            blanksOffset += numOfBlanks - 1;
        }
    }
    detabed[len + blanksOffset] = '\0';
}
