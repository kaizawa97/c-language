#include <stdio.h>
#define MAX 1024

int get_line(char line[], int maxline);
int reverse(int len, char str[]);
char line[MAX];

int main(void)
{
	int len, max, newline, i;
	char x;

	max = 0;
	while ((len = get_line(line, MAX)) > 0)
	{
		reverse(len, line);
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

int reverse(int len, char str[])
{
	int i;
	char copy;

	len--;

	for (i = len; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
