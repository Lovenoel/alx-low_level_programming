#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is the number of characters
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
			{_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');

		}
	}
	else
		-putchar('\n');
}
