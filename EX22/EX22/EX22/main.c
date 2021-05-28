#include <stdio.h>


int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max 
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	int sum6 = 0;
	int sum7 = 0;
	int sum8 = 0;
	int sum9 = 0;
	int sum10 = 0;

	printf("Enter the First Element:");
	scanf_s("%d", &a);

	printf("Enter the Second Element:");
	scanf_s("%d", &b);

	printf("Enter the Third Element:");
	scanf_s("%d", &c);

	printf("Enter the Fourth Element:");
	scanf_s("%d", &d);

	printf("Enter the Fifth Element:");
	scanf_s("%d", &e);

	printf("The Given array is { %d , %d , %d , %d , %d }\n", a, b, c, d, e);

	sum1 = a + b + c + d + e;
		printf("SUM of {%d , %d , %d , %d  %d} is\t %d\n", a, b, c, d, e, sum1 );

		sum2 = b + c + d + e;
		printf("SUM of {%d , %d , %d , %d} is\t %d\n", b, c, d, e , sum2 );

		sum3 = a + b + c + d ;
		printf("SUM of {%d , %d , %d , %d} is\t %d\n", a, b, c, d, sum3 );

		sum4 = c + d + e;
		printf("SUM of {%d , %d , %d}  is\t\t %d\n", c, d, e , sum4 );

		sum5 =  b + c + d;
		printf("SUM of {%d , %d , %d} is\t\t %d\n", b, c, d, sum5 );

		sum6 = a + b + c;
		printf("SUM of {%d , %d , %d} is\t\t %d\n", a, b, c, sum6 );

		sum7 = a + b;
		printf("SUM of {%d , %d} is\t\t %d\n", a, b, sum7 );

		sum8 = b + c;
		printf("SUM of {%d , %d} is\t\t %d\n", b, c , sum8 );

		sum9 =  c + d ;
	printf("SUM of {%d , %d} is\t\t %d\n", c, d, sum9 );

		sum10 = d + e;
		printf("SUM of {%d , %d} is\t\t %d\n", d, e , sum10 );

		printf("\n");

		int arr[] = { sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10 };
		int n = sizeof(arr) / sizeof(arr[0]);
		printf("Largest sum of the subarray in given array is  %d", largest(arr, n));

	return 0;
}

