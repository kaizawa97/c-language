#include <stdio.h>
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            puts("Fizzbuzz\n");
        }
        else if (i % 3 == 0)
        {
            puts("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            puts("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}