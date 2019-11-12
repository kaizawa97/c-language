#include <stdio.h>
#define TAB 8

//タブをスペースに置き換える
//5つ以上になってはいけない
//4の倍数ごとに文字を合わせる

int main()
{
	char c;
	int i, count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			for (i = 0; i < (TAB - count % TAB); i++)
			{
				putchar(' ');
			}
			count += i - 1;
		}
		else
		{
			putchar(c);
		}

		if (c == '\n')
		{
			count = 0;
		}
		else
		{
			++count;
		}

		return 0;
	}
}