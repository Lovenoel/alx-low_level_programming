#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{

	int i = 1;
	while (i <= size && size > 0)
	{
		int ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		ii++;
	}
	if (i == 1)
		_putchar('\n');
}
