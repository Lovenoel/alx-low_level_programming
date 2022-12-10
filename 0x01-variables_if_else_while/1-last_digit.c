#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and it checks whether its greater than 5,less than 6 or its zero
 * Result" Always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX /  2;
	if ((n % 10) > 5)
	{	
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}	
	else if ((n % 10) < 6 && (n %10) !=0)
	{	
		printf("last digit of %d is %d and is 0\n", n, last);
	}	
	else
	{
		printf("last of %d is %d and is less than 6\n", n, last);
	}	
	result(0);
}
