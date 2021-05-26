#include <stdio.h>
void swap_1(int* r_0, int* z_9)
{
	int tm_str = *r_0;
	*r_0 = *z_9;
	*z_9 = tm_str;
}
void selecn_Sort(int arr_0[], int sz)
{
	for (int st = 0; st < sz - 1; st++)
	{
		int mn_indx = st;
		for (int j = st + 1; j < sz; j++)
		{
			if (arr_0[j] < arr_0[mn_indx])
				mn_indx = j;
		}
		swap_1(&arr_0[mn_indx], &arr_0[st]);
	}
}
void print_arr(int arr_1[], int sz_1)
{
	for (int k = 0; k < sz_1; ++k) {
		printf("%d ", arr_1[k]);
	}
	printf("\n");
}
int main()

{
	int data_0[] = {9,1,8,2,7,3,6,4,5};
	int sz = sizeof(data_0) / sizeof(data_0[0]);
	selecn_Sort(data_0, sz);
	printf("Asccending_Order_applying_Selection_Sort:\n");
	print_arr(data_0, sz);
}