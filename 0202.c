// Exercise 2-2. Write the function htoi(s), which converts a string of hexadecimal digits into its
// equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.

#include <math.h>
#include <stdio.h>
int get_len(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++) { }
    return i;
}
int htoi(char s[])
{
    char digits[] = "0123456789abcdef";
    int out = 0;
    int len = get_len(s);
    for (int i = 0; s[i] != '\0'; i++) {
        int curr = 0;
        if (s[i] >= '0' && s[i] <= '9') {
            curr = s[i] - '0';
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            curr = s[i] - 'A' + 10;
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            curr = s[i] - 'a' + 10;
        }

        out = out + (curr * pow(16, len - (i + 1)));
    }

    return out;
}
int main(int argc, char* argv[])
{
    printf("0: %d\n", htoi("0"));
    printf("1: %d\n", htoi("1"));
    printf("5: %d\n", htoi("5"));
    printf("10: %d\n", htoi("a"));
    printf("15: %d\n", htoi("f"));
    printf("16: %d\n", htoi("10"));
    printf("1460: %d\n", htoi("5B4"));
    return 0;
}
