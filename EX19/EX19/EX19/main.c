//realloc

#include<stdio.h>
#include<stdlib.h>

int main() {
	int *ptr, i, n1, n2;
	printf("Enter the size of the array : ");
	scanf_s("%d", &n1);
	ptr = (int*)malloc(n1 * sizeof(int));
	printf("Address of previously allocated memory: ");
	for (i = 0; i < n1; ++i)
		printf("%u\t", ptr + i);
	printf("\nEnter new size of array:");
	scanf_s("%d", &n2);
	ptr = realloc(ptr, n2);
	for (i = 0; i < n2; ++i)
		printf("%u\t", ptr + i);
	return 0;
	
	}