#include <stdio.h>

main()
{
	int c, p;

	​while((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			printf("%c", c);
		}
		​if(p != ' ')
		{
			if (c == ' ')
			{
				printf(" ");
			}
		}

		p = c;
	}
}