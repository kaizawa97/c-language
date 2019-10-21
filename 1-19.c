#include <stdio.h>
#define MAX 1024

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len, max, fixlen, newline, i;
	char line[MAX];
	char longest[MAX];

	max = 0;
	while ((len = get_line(line, MAX)) > 0)
	{
		printf("%s", ) return 0;
	}
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

int reverse(char s[], int number)
{
}