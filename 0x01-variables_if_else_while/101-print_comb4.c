#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens)))/*eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&
								tens == '8'))/*adds commas and spaces*/
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
