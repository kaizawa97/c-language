#include <stdio.h>
#define MAX 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len, max, i, n;
	char line[MAX];
	char longest[MAX];

	max = 0;
	while ((len = get_line(line, MAX)) > 0)
	{
		n = 5;
		if (len == n)
		{
			printf("%s\n", line);
		}
	}
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;

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

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}