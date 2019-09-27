#include <stdio.h>

int main()
{
    int c, space, tab, kaigyou;

    space = 0;
    tab = 0;
    kaigyou = 0;

    while ((space = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++space;
        }
        if (c == '\t')
        {
            ++tab;
        }
        if (c == '\n')
        {
            ++kaigyou;
        }
    }

    printf("空白は%d タブは%d 改行は%d\n", space, tab, kaigyou);
}