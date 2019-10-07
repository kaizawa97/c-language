#include <stdio.h>
#define MAX 10000

int main()
{
	int i, c, n, a;
	int list[MAX];
	char h[256];

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
		for (n = 0; n < list[i]; ++n)
		{
			putchar('*');
		}
		putchar('\n');
	}
	// for (i = 'a'; i < 'z'; ++i)
	// {
	// 	printf("%c", i);
	// 	for (n = 0; n < list[i]; ++n)
	// 	{
	// 		putchar('*');
	// 	}
	// 	putchar('\n');
	// }
	return 0;
}
