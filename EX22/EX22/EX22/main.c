#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

long* inputs;
long* working_set;
long input_size;
long size_of_working_set;

/// <summary>
/// This function requries the size and the offset for a summation operation within the 
/// inputs array. Example: If inputs array contains 5, 4, 3, 2, 1, and size is 2 and offset
/// is 2, then the answer is 5.
/// </summary>
/// <param name="size"></param>
/// <param name="offset"></param>
/// <returns></returns>
long summation_on_inputs(long size, long offset) {
	long sum = 0;
	for (long i = 0; i < size; i++) {
		sum = sum + inputs[i + offset];
		printf("%ld\t%ld\t%ld\n", i, inputs[i + offset], sum);
	}

	return sum;
}

/// <summary>
/// This function returns the summation from 1 to size. Example if the input size
/// is 5, then the output is 1 + 2  + 3 + 4 + 5.
/// </summary>
/// <param name="size">The input size.</param>
/// <returns></returns>
long summation(long size) {
	long sum = 0;
	for (long i = 1; i <= size; i++) {
		sum = sum + i;
	}

	return sum;
}

/// <summary>
/// This function returns 1 if it succeeds otherwise it returns 0.
/// </summary>
/// <param name="size">The size of the input parameter.</param>
/// <returns></returns>
int read_input(long size) {
	/* Initial memory allocation */
	inputs = (long*)malloc(size * sizeof(long));

	if (inputs == NULL) {
		printf("Insufficient memory available\n");
		return 0;
	}

	for (long i = 0; i < size; i++) {
		printf("enter input %ld:", i);
		scanf_s("%ld", &inputs[i]);
	}

	return 1;
}

/// <summary>
/// This prints the contents of the input array.
/// </summary>
/// <param name="size"></param>
void preview_inputs(long size) {
	for (long i = 0; i < size; i++) {
		printf("input %ld = %ld\n", i, inputs[i]);
	}
}

void find_largest_sub_array() {
	size_of_working_set = summation(input_size);
	printf("the size of the working set is: %ld\n", size_of_working_set);

	working_set = (long*)malloc(size_of_working_set * sizeof(long));

	long index = 0;

	printf("sweep process:\n");
	long sweep_count = 1;
	for (long sweep_size = input_size; sweep_size > 0;  sweep_size--) {
		for (long sweep_offset = 0; sweep_offset < sweep_count; sweep_offset++) {
			long a = summation_on_inputs(sweep_size, sweep_offset);
			working_set[index] = a;

			printf("index=%ld\tsweep_size=%ld\tsweep_offset=%ld\tsum=%ld\n", index, sweep_size, sweep_offset, a);
			
			index = index + 1; // index++
		}
		sweep_count = sweep_count + 1;
	}
}

long largest(long arr[], long size)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max 
	for (i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main() {
	printf("input the size of the input array: ");
	scanf_s("%ld", &input_size);

	read_input(input_size);
	preview_inputs(input_size);
	find_largest_sub_array();

	long largest_sum = largest(working_set, size_of_working_set);
	printf("largest sum: %ld", largest_sum);

	free(inputs);

	return 0;
}

