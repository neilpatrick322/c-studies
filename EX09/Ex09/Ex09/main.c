#include<stdio.h>

int isEven(int num);

int main()
{
	int n;
	printf("Enter the number\n");
	scanf_s("%d", &n);

	printf("%d is a type %d \n", n, isEven(n));
	return 0;
}
int isEven(int num)
{
	return (num % 2 == 0) ? 1 : 0;
	
	}
	


