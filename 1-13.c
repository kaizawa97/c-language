#include <stdio.h>

#define MAX 100

int main()
{

	int c, i, len, list_count, max, n, view;
	int length = 0;
	int count[MAX];

	len = 0;
	list_count = 0;
	view = 0;

	while (((c = getchar())) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			count[list_count] = len;
			++list_count;
			len = 0;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			count[list_count] = len;
			++list_count;
			len = 0;
		}
	}
	printf("%d\n", list_count);

	for (i = 0; i < list_count; ++i)
	{
		c = count[i];
		++view;
	}
	// for (i = 0; i < MAX; ++i)
	// {
	// 	printf("%d\n", i);
	// 	for (n = 0; n < view; ++n)
	// 	{
	// 		putchar('*');
	// 	}
	// }
}