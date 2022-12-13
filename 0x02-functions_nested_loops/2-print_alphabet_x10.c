#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int ten;
	char m;

	for (ten = 0; ten <= 9; ten++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
