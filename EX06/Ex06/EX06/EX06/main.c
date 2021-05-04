#include<stdio.h>

int main()
{
	int i;
	int n;

	printf("Enter the no. then press Enter\n");
	scanf_s("%d", &n);

	for (i = 1; i <= 100; i++)
	{
		printf(" %d * %d = %d \n", n, i,(n * i));
	}
	return 0;
}