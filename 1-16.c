#include <stdio.h>
#define MAX 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len, max, i;
	char line[MAX];
	char longest[MAX];

	max = 0;
	while ((len = get_line(line, MAX)) > 0)
	{
		if (len == 5)
		{
			printf("%s\n", line);
		}

		if (len > max)
		{
			max = len;
			copy(longest, line);
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
	s[i] = '\n';
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