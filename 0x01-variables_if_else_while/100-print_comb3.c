#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints all different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens  <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates repitition*/
			{
				putchar(ones);
				putchar(tens);
				if (!(ones == '9' && tens == '8'))/* adds commas and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
