#include <stdio.h>
#define MAX 10000

int main()
{
	int i, c, n, u;
	int list[MAX];

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
	for (i = 'a'; i <= 'z'; ++i)
	{
		printf("%c: ", i);
		for (n = 0; n < list[u]; ++n)
		{
			putchar('*');
		}
		putchar('\n');
		++u;
	}
	return 0;
}
