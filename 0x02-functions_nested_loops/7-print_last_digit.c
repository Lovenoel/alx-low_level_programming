#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @y: the number
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
	int w = y % 10;

	if (w < 0)
		w *= -1;

	_putchar(w + '0');

	return (0);
}
