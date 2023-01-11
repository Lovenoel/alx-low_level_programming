#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: the character to be located
 * @s: the string to be pointed to
 * Return: a pointer to the first occurance of the character
 * in a string
 */
char *_strchr(char *s, char c)
{
	int a, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
	}
	return ('\0');
}
