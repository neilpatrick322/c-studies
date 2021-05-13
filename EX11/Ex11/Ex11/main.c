//fibonacchi

#include<stdio.h>

void fabonacchi(int n);

int main() {
	int num;
	printf("Enter the number\n");
	scanf_s("%d", &num);

	fabonacchi(num);
	return 0;

}
void fabonacchi(int n) {
	int first = 0;
	int second = 1;

	int temp, i;

	if (n >= 1){
		printf("%d\n", first);
	}
	if (n >= 2) {
		printf("%d\n", second);

	}
	if (n > 2) {
		for (i = 3; i <= n; i++)
		{
			temp = first + second;
			printf("%d\n", temp);
			first = second;
			second = temp;
		}
	}
}