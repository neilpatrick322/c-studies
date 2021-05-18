//program to swap two numbers(pointers)

#include<stdio.h>

void swap(int* p1, int* p2);

int main() {
	int a, b;
	printf("enter value of a : ");
	scanf_s("%d", &a);
	printf("enter value of b : ");
	scanf_s("%d", &b);

	swap(&a, &b);

	printf("\nValue of a is %d and b is %d", a, b);
}
void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

