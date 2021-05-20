//Malloc (DYNAMIC MEMORY ALLOCATION)

#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, n, * ptr, sum = 0;
	printf("Enter number of elements: ");
	scanf_s("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));

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

