#include <stdio.h>
#define MAX 1024

int get_line(char line[], int maxline);
int reverse(char str[]);
char line[MAX];

int main(void)
{
	int len;

	while ((len = get_line(line, MAX)) > 0)
	{
		reverse(line);
	}
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < MAX; ++i)
	{
		s[i] = '\0';
	}

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
		if (c == '\n')
		{
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
	return i;
}

int reverse(char str[])
{
	int i;
	for (i = MAX; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
