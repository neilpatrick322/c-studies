//switch cas structure

#include<stdio.h>

int main() {
	int x;

	printf("Please enter the value of x then press Enter\n");
	scanf_s("%d", &x);

	switch (x % 2) {
	case 1:
		printf("x is not divisible by 2");
		
		break;
		
	case 0:
		printf("x is divisible by 2");

		break;

	default:
		printf("I do not know the output");

	}
	printf("\n");

	return 0;

}