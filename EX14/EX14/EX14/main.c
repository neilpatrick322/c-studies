// Multi-Dimensional array 

#include<stdio.h>

int main() {

	int row = 5;
	int col = 5;
	int arr[5][5];
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("Enter the Value of row %d,col %d : ", i, j);
			scanf_s("%d", &arr[i][j]);

		}
	}
	for (i = 0; i < row; i++) {
		printf("\n");
		for (j = 0; j < col; j++) {
			printf("%d, ", arr[i][j]);

		};

	}return 0;
}