#include <stdio.h>

int main()
{
	char c;
	int count = 0;

	while ((c = getchar()) != EOF)
	{
		++count;
		printf("0x%02x ", 0xff & c);
	}
	printf("\n%d\n", count);
}