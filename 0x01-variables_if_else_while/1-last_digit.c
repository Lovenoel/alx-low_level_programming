#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, p);
	if (p == 0)
		printf("last digit of %d is %d and is zero\n", n, p);
	if (p < 6 && p != 0)
		printf("last digit of %d is %d and is less than 6\n", n, p);
	return (0);
}
