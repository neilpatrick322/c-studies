// write a function to calculate power of 2( RECURSIVE FUNCTION EX.)

#include<stdio.h>

int f(int n);

int main() {
	
	int power;
	

	printf("Enter the power \n");
	scanf_s("%d", &power);
	int powerOf2 = f(power);

	printf("2 to the power of %d is %d\n",power, powerOf2);

	return 0;

}
	int f(int n) {
		int y;
		if (n == 0) {
			return 1;
		}
		else {
			y = 2 * f(n - 1);
			return y; 
		}
	}


