#include<stdio.h>

int main()
{
	int a;
	printf("please enter a no.\n");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("yes the no. you entered is a positive no.");

	}
	else {
		printf("the no. you entered is not a positive no.");
	}
	return 0;
}