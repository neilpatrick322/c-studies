#include<stdio.h>

//GOTO Statement

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			goto Label;

		}
		printf("%d", i);
	}
Label: printf("\n Value of i is 4");
	return 0;
}