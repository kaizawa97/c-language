#include <stdio.h>

int main()
{
	int c, tab, backspace, backslash;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			c = '\\';
			putchar(c);
			c = 't';
			putchar(c);
		}
		if (c == '\b')
		{
			c = '\\';
			putchar(c);
			c = 'b';
			putchar(c);
		}
		if (c == '\\')
		{
			c = '\\';
			putchar(c);
			c = '\\';
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
}