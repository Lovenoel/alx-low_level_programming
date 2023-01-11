#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the pointer
 * @b: the constant character
 * @n: the number of bytes
 * Return: the pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
