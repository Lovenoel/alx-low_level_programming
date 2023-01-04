#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	 (*s == '\0'); /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
