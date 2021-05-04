//calculating simple interes

#include<stdio.h>

float simpleInterest(int p, int r, int t);

int main()
{
	int p, t, r;
	printf("Enter Principle\n");
	scanf_s("%d", &p);
	printf("Enter Rate \n");
	scanf_s("%d", &r);
	printf("Enter Time\n");
	scanf_s("%d", &t);

	printf("Simple Interest is %f\n ", simpleInterest(p, r, t));
	return 0;
}
float simpleInterest(int p, int r, int t) {
	float interest = (float)(p * r * t) / (float)100;
	return interest;
}