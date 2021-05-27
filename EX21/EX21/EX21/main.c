#include <stdio.h>
#include <stdlib.h>

// Measure-Command { ./EX21.exe 99999 } # 1418.1111 

char buf[80];
FILE* fp = NULL;
long i, prime, lim_up, n;

int main(int argc, char* argv[], char* environment[])
{
	errno_t error = fopen_s(&fp, "prime_numbers.txt", "w");
	if (fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("\nUpper Limit: %s", argv[1]);
	char* eptr;

	lim_up = strtol(argv[1], &eptr, 10);


	for (n = 1; n < lim_up; n++)
	{

		prime = 1;
		for (i = 2; i < n; i++)
			if (n % i == 0)
			{
				prime = 0;
				break;
			}
		if (prime)
		{
			//printf(" %d ", n);
			fprintf(fp, "prime numbers : ");
			fprintf(fp, " %d\n ", n);
		}

	}
	fclose(fp);

	printf("\n Details successfully written to the file\n\n");

	return 0;
}