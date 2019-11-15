#include <stdio.h>

int main()
{
	char c, a;
	int i;

	int count = 0;

	while ((c = getchar()) != EOF)
	{
		if (count == 19)
		{
			if (c == ' ')
			{
				putchar('\n');
				count = 0;
				continue;
			}
		}
		if (count == 0)
		{
			if (c == '\n')
			{
				continue;
			}
		}
		if (count == 20)
		{
			if (c != '\n')
			{
				putchar('-');
				putchar('\n');
			}
			count = 0;
		}
		if (c == '\n' && count < 20)
		{
			putchar(c);
			count = 0;
		}
		else
		{
			++count;
			putchar(c);
		}
	}
}