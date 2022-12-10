#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Get a random number and check its last digit and compare with 5
 * Result" Always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX /  2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else
		printf("last of %d is %d and is less than 6\n", n, last);
	result(0);
}
