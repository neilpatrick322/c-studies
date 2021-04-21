#include <stdio.h>_ 

	// Initialize Variable
    int output = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d= 0;
	int e= 0;
	int f= 0;
	int g = 0;
	int h = 0;
	

	int main(void){
		int input_value;
		int remainder;
		int _count_1000;
		int _count_500;
		int _count_200;
		int _count_100;
		int _count_50;
		int _count_20;
		int _count_10;
		int _count_5;
		int _count_1;
			//Asking user to enter integer input
			; printf("Please enter any integer numbers Then Press Enter:\n");
	scanf_s("%d", &input_value);
	//Finding the remainder with modulus operator
	_count_1000 = input_value / 1000;
	remainder = input_value % 1000;

	_count_500 = remainder / 500;
	remainder = remainder % 500;

	_count_200 = remainder / 200;
	remainder = remainder % 200;

	_count_100 = remainder / 100;
	remainder = remainder % 100;

	_count_50 = remainder / 50;
	remainder = remainder % 50;

	_count_20 = remainder / 20;
	remainder = remainder % 20;

	_count_10 = remainder / 10;
	remainder = remainder % 10;

	_count_5 = remainder / 5;
	remainder = remainder % 5;

	_count_1 = remainder / 1;
	remainder = remainder % 1;

	//displaying output to the end user
	printf("Remainder in 1000 = %d\n", _count_1000);
	printf("Remainder in 500 = %d\n",_count_500);
	printf("Remainder in 200 = %d\n",_count_200);
	printf("Remainder in 100 = %d\n", _count_100);
	printf("Remainder in 50 = %d\n", _count_50);
	printf("Remainder in 20 = %d\n", _count_20);
	printf("Remainder in 10 = %d\n", _count_10);
	printf("Remainder in 5 = %d\n", _count_50);
	printf("Remainder in 1 = %d\n",_count_1);

	return 0;
}
			





