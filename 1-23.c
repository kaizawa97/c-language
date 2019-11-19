#include <stdio.h>

int main()
{
	int i;
	char c, keep;
	int inslash01 = 0;
	int inslash02 = 0;
	int inasutarisuku = 0;
	int count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '/' && count == 0)
		{
			++count;
			continue;
		}

		else if (c == '/' && count == 1)
		{
			inslash02 = 1;
		}

		// else if (c == '*' && count == 1)
		// {
		// 	inslash01 = 1;
		// }

		if (inslash02 == 1 && c == '\n')
		{
			inslash02 = 0;
			count = 0;
		}

		// if (inslash01 == 1 && c == '*')
		// {
		// 	inasutarisuku = 1;
		// }

		// else if (inasutarisuku == 1 && c == '/')
		// {
		// 	inslash01 = 0;
		// }

		else
		{
			// inasutarisuku = 0;
			putchar(c);
		}
	}
}