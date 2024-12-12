#include <stdio.h>
int main(void)
{
    int low, high;
    float celc, fahr, step;
    low = 0;
    high = 50;
    step = 5;
    celc = low;

    while(celc < high)
    {
        fahr = celc * (9.0 / 5.0) + 32.0;
        printf("%4.0f %6.1f\n", celc, fahr);
        celc += step;
    }
    return 0;
}
