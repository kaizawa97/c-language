#include <stdio.h>

int main()
{
    double nc;

    // c = getchar();
    // while (c != EOF)
    // {
    //     putchar(c);
    //     c = getchar();
    // }

    // c = EOF != EOF;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}