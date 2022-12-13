#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @y: the number
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
	int last_digit;

	if (y < 0)
	{
		last_digit = (-1 * (y % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (y % 10);

		_putchar(last_digit + '0');
		return (last_digit);
	}
}
