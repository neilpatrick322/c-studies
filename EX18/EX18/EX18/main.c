//CALLOC

#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i, * ptr, sum = 0;
	printf("Enter number of Elements: ");
	scanf_s("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	if (ptr == NULL) {
		printf("ERROR!MEMORY NOT ALLOCATED,");
		exit(0);
	}
	printf("Enter elements of array:");
	for (i = 0; i < n; ++i) {
		scanf_s("%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("sum=%d", sum);
	free(ptr);
	return 0;
	}
