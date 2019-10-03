#include <stdio.h>
#define MAX 100
#define IN 1
#define OUT 0

int main()
{
	int c, i, n, len, state;
	int list[MAX];

	state = OUT;
	len = 0;
	for (i = 0; i < MAX; ++i)
	{
		list[i] = 0;
	}

	while (((c = getchar())) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (len > 0)
			{
				++list[len];
			}
			state = OUT;
			len = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			++len;
		}
		else if (state == IN)
		{
			++len;
		}
	}

	for (i = 0; i < MAX; ++i)
	{
		printf("%d", i);
		for (n = 0; n < list[i + 1]; ++n)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
