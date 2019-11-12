#include <stdio.h>

#define TAB 8

int main()
{
	char c, i;
	int count, a;

	count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++count;
		}
		else
		{
			for (a = 0; a < count; ++a)
			{
				putchar(' ');
			}
			putchar(c);
			count = 0;
		}
		if (count == 4)
		{
			i = '\t';
			putchar(i);
			count = 0;
		}
	}
}