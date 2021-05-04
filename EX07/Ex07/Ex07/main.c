#include<stdio.h>

//continue statement example

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 5 || i == 6)
		{
			printf("\nSkipping %d\n" "\ncontinue statement\n", i);
				continue;
		}
		printf("%d", i);
	}
	return 0;
}