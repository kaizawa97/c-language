#include <stdio.h>

int main()
{
    int fahr;

    printf("%3c %6c\n", 'C', 'F');
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
