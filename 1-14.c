#include <stdio.h>
#define MAX 10

int main()
{
	int c, i, n, len;
	int list[MAX];

	len = 0;
	for (i = 0; i < MAX; ++i)
	{
		list[i] = 0;
	}

	while (((c = getchar())) != EOF)
	{
		if (c >= 'A' && c <= 'Z')
		{
			++list[c - 'A'];
		}
		else if (c >= 'a' && c <= 'z')
		{
			++list[c - 'a'];
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
