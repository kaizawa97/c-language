#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 10;
    step = 1;

    printf("%3c %6c \n", 'C', 'F');
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = fahr / 5 * 9 + 32;
        printf("%3.0f %-6f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
